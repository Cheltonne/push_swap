/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:10:01 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 11:59:59 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data)
{
	t_list	*head;
	t_list	*tmp;

	head = data->a;
	if (head && head->next)
	{
		data->a = data->a->next;
		head->next = NULL;
		tmp = data->a;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = head;
	}
	ft_putstr_fd("ra\n", 1);
}

void	rra(t_data *data)
{
	int		i;
	t_list	*sec_to_last;
	t_list	*tail;
	t_list	*tmp;

	i = 1;
	tail = ft_lstlast(data->a);
	if (data->a && data->a->next)
	{
		tmp = data->a;
		data->a = tail;
		tail->next = tmp;
		sec_to_last = data->a;
		while (i < data->size)
		{
			sec_to_last = sec_to_last->next;
			i++;
		}
		sec_to_last->next = NULL;
	}
	ft_putstr_fd("rra\n", 1);
}

void	pa(t_data *data)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!data->b)
		return ;
	tmp = data->a;
	tmp2 = data->b->next;
	data->a = data->b;
	data->a->next = tmp;
	data->b = tmp2;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_data *data)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!data->a)
		return ;
	if (data->b)
		tmp = data->b;
	else
		tmp = NULL;
	tmp2 = data->a->next;
	data->b = data->a;
	data->b->next = tmp;
	data->a = tmp2;
	ft_putstr_fd("pb\n", 1);
}

void	sa(t_data *data)
{
	t_list	*tmp;

	if (!data->a || ft_lstsize(data->a) == 1)
		return ;
	tmp = data->a;
	data->a = data->a->next;
	tmp->next = data->a->next->next;
	data->a->next = tmp;
	ft_putstr_fd("sa\n", 1);
}
