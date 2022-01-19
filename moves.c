/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:10:01 by chajax            #+#    #+#             */
/*   Updated: 2022/01/19 18:34:11 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data)
{
	t_list	*head;
	t_list	*tmp;

	head = data->a;
	stack_visualizer(data, 1);
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
	stack_visualizer(data, 1);
	printf("\n\n");
}

void	pa(t_data *data)
{
	t_list	*tmp;

	if (!data->b)
		return ;
	tmp = data->a;
	data->a = data->b;
	data->a->next = tmp;
	printf("pa\n");
}

void	pb(t_data *data)
{
	t_list	*tmp;

	if (!data->a)
		return ;
	tmp = data->b;
	data->b = data->a;
	data->b->next = tmp;
	printf("pb\n");
}
