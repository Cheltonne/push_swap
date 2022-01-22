/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:48:24 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 12:08:19 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_data *data, t_list *lst)
{
	t_index	num;
	t_elem	*elem;

	elem = lst->content;
	num.i = elem->value;
	lst = lst->next;
	elem = lst->content;
	num.j = elem->value;
	lst = lst->next;
	elem = lst->content;
	num.o = elem->value;
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

void	sort_5(t_data *data, t_list *lst)
{
	pb(data);
	pb(data);
	sort_3(data, lst);
	lst = data->a;
	pa(data);
	sort_3(data, lst);
	pa(data);
}

void	sort_big_stack(t_data *data)
{
	int		j;
	int		i;
	int		num;
	t_elem	*a_top;

	i = 0;
	while (!is_sorted(data))
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
