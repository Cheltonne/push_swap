/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:10:01 by chajax            #+#    #+#             */
/*   Updated: 2022/01/19 00:28:49 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data)
{
	t_list	*tmp;
	t_list	*head;

	if (data->a && data->a->next)
	{
		tmp = data->a;
		data->a = data->a->next;
		head = data->a;
		tmp->next = NULL;
		while (data->a->next)
			data->a = data->a->next;
		data->a->next = tmp;
		data->a = head;
	}
	printf("ra\n");
}

void	pa(t_data *data)
{
	t_list	*tmp;

	if (!data->b)
		return ;
	tmp = data->b->next;
	data->b->next = data->a;
	data->a = data->b;
	data->b = tmp;
	printf("pa\n");
}

void	pb(t_data *data)
{
	t_list	*tmp;

	if (!data->a)
		return ;
	tmp = data->a->next;
	data->a->next = data->b;
	data->b = data->a;
	data->a = tmp;
	printf("pb\n");
}
