/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:48:24 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 22:51:59 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_choice(t_data *data)
{
	if (data->size == 4)
		sort_3(data);
	else if (data->size == 6)
		sort_5(data);
	else
		sort_big_stack(data);
}

void	sort_3(t_data *data)
{
	t_index	num;
	t_elem	*elem;
	t_list	*lst;

	lst = data->a;
	elem = NULL;
	init_sort_3(data, &num, elem, lst);
	if (num.i > num.j && num.i > num.o && num.o < num.j)
	{
		sa(data);
		rra(data);
	}
	else if (num.i < num.j && num.j > num.o && num.o > num.i)
	{
		sa(data);
		ra(data);
	}
	else if (num.i > num.j && num.i < num.o && num.o > num.j)
		sa(data);
	else if (num.i > num.o && num.o > num.j && num.i > num.j)
		ra(data);
	else if (num.o < num.i && num.o < num.j && num.i < num.j)
		rra(data);
}

void	sort_5(t_data *data)
{
	t_elem	*elem;
	t_elem	*elem_min;
	t_elem	*elem_max;

	elem_min = data->a_cpy->content;
	elem_max = ft_lstlast(data->a_cpy)->content;
	while (ft_lstsize(data->b) < 2)
	{
		elem = data->a->content;
		if (elem->value == elem_min->value || elem->value == elem_max->value)
			pb(data);
		else
			ra(data);
	}
	sort_3(data);
	pa(data);
	pa(data);
	elem = data->a->content;
	if (elem->value == elem_max->value)
		ra(data);
	else
	{
		sa(data);
		ra(data);
	}
}

void	sort_big_stack(t_data *data)
{
	int		j;
	int		i;
	int		num;
	t_elem	*a_top;

	i = 0;
	while (!is_sorted(data, data->a))
	{
		j = 0;
		while (++j < data->size)
		{
			a_top = data->a->content;
			num = a_top->index;
			if (((num >> i) & 1) == 1)
				ra(data);
			else
				pb(data);
		}
		while (ft_lstsize(data->b) != 0)
			pa(data);
		i++;
	}
}
