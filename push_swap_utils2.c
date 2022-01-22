/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:33:16 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 21:55:24 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_arr(t_data *data, t_elem **arr, int size, t_list *lst)
{
	int	o;

	o = 0;
	while (o < size)
	{
		arr[o] = lst->content;
		lst = lst->next;
		o++;
	}
	lst = data->a;
}

int	is_sorted(t_data *data, t_list *lst)
{
	t_index		index;
	t_elem		**arr;
	int			size;

	size = ft_lstsize(data->a);
	arr = ft_calloc(size, sizeof(t_elem *));
	if (!arr)
		return (0);
	index.i = 0;
	fill_arr(data, arr, size, lst);
	while (index.i < size - 1)
	{
		if (arr[index.i]->index > arr[index.i + 1]->index)
		{
			free(arr);
			lst = data->a;
			return (0);
		}
		index.i++;
	}
	free(arr);
	lst = data->a;
	return (1);
}

void	init_sort_3(t_data *data, t_index *index, t_elem *elem, t_list *lst)
{
	t_list	*tmp;

	tmp = data->a;
	elem = lst->content;
	index->i = elem->value;
	lst = lst->next;
	elem = lst->content;
	index->j = elem->value;
	lst = lst->next;
	elem = lst->content;
	index->o = elem->value;
	data->a = tmp;
}
