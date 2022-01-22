/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:48:30 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 22:54:45 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*new_elem(int value, int index)
{
	t_elem	*new;

	new = malloc(sizeof(t_elem));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = index;
	return (new);
}

void	init(t_data *data, char **av)
{
	int		i;
	t_list	*head;
	t_list	*head_cpy;

	i = 1;
	head = ft_lstnew(new_elem(ft_atoi(av[i]), 0));
	head_cpy = ft_lstnew(new_elem(ft_atoi(av[i]), 0));
	data->a = head;
	data->a_cpy = head_cpy;
	i++;
	while (i < data->size)
	{
		ft_lstadd_back(&head, ft_lstnew(new_elem(ft_atoi(av[i]), i - 1)));
		ft_lstadd_back(&head_cpy, ft_lstnew(new_elem(ft_atoi(av[i]), i - 1)));
		i++;
	}
}

void	swap(int *xp, int *yp)
{
	int	tmp;

	tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

int	bubble_sort(t_data *data, t_list *lst)
{
	t_index	index;
	t_elem	**arr;

	index.i = 0;
	arr = ft_calloc(data->size, sizeof(t_elem *));
	if (!arr)
		return (0);
	lst = data->a_cpy;
	fill_arr(data, arr, data->size - 1, lst);
	while (index.i < data->size - 1)
	{
		index.j = 0;
		while (index.j < data->size - index.i - 2)
		{
			if (arr[index.j]->value > arr[index.j + 1]->value)
				swap(&arr[index.j]->value, &arr[index.j + 1]->value);
			index.j++;
		}
		index.i++;
	}
	free(arr);
	return (1);
}

void	set_indexes(t_data *data, t_list *lst, t_list *lst_cpy)
{
	int		i;
	int		o;
	t_elem	*a;
	t_elem	*a_cpy;

	i = 0;
	while (i < data->size - 1)
	{
		a = lst->content;
		lst_cpy = data->a_cpy;
		o = 0;
		while (o < data->size - 1)
		{
			a_cpy = lst_cpy->content;
			if (a->value == a_cpy->value)
				swap (&a->index, &a_cpy->index);
			lst_cpy = lst_cpy->next;
			o++;
		}
		lst = lst->next;
		i++;
	}
	lst = data->a;
}
