/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:25:13 by chajax            #+#    #+#             */
/*   Updated: 2022/01/19 17:45:31 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_visualizer(t_data *data, int choice)
{
	t_list	*suisei;
	t_elem	*hosimati;
	int		size = ft_lstsize(data->a) - 1;

	if (choice == 1)
		suisei = data->a;
	else
		suisei = data->b;
	for (int i = 0; i < size; i++)
	{
		hosimati = suisei->content;
		if (hosimati)
		{
			printf("    %d             %d\n", hosimati->value, hosimati->index);
			suisei = suisei->next;
		}
	}
	printf("-----------        -----------\n");
	printf("Values             Indexes\n");
}

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
	data->b = ft_lstnew(NULL);
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
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int	bubble_sort(t_data *data)
{
	int		i, j;
	t_elem 	**arr;
	t_list	*lst;

	arr = ft_calloc(data->size, sizeof(t_elem *));
	if (!arr)
		return (0);
	lst = data->a_cpy;
	for (int o = 0; o < data->size - 1; o++)
	{
		arr[o] = lst->content;
		lst = lst->next;
	}
	for (i = 0; i < data->size - 1; i++)
		for (j = 0; j < data->size - i - 2; j++)
			if (arr[j]->value > arr[j + 1]->value)
				swap(&arr[j]->value, &arr[j + 1]->value);
	free(arr);
	return (1);
}

void	set_indexes(t_data *data)
{
	int 	i;
	int 	o;
	t_list	*lst;
	t_list	*lst_cpy;
	t_elem	*a;
	t_elem	*a_cpy;

	lst = data->a;
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
}
