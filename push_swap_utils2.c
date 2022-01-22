/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:33:16 by chajax            #+#    #+#             */
/*   Updated: 2022/01/20 19:02:03 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_arr(t_elem **arr, int size, t_list *lst)
{
	int	o;

	o = 0;
	while (o < size)
	{
		arr[o] = lst->content;
		lst = lst->next;
		o++;
	}
}

int	is_sorted(t_data *data)
{
	t_index		index;
	t_elem		**arr;
	t_list		*lst;
	int			size;

	size = ft_lstsize(data->a);
	arr = ft_calloc(size, sizeof(t_elem *));
	if (!arr)
		return (0);
	lst = data->a;
	index.i = 0;
	fill_arr(arr, size, lst);
	while (index.i < size - 1)
	{
		if (arr[index.i]->index > arr[index.i + 1]->index)
		{
			free(arr);
			return (0);
		}
		index.i++;
	}
	free(arr);
	return (1);
}
