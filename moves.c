/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:10:01 by chajax            #+#    #+#             */
/*   Updated: 2022/01/19 23:19:55 by chajax           ###   ########.fr       */
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
	printf("ra\n");
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
	printf("pa\n");
}

void	pb(t_data *data)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!data->a)
		return ;
	tmp = data->b;
	tmp2 = data->a->next;
	data->b = data->a;
	data->b->next = tmp;
	data->a = tmp2;
	printf("pb\n");
}
