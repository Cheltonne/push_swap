/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:25:13 by chajax            #+#    #+#             */
/*   Updated: 2022/01/17 18:49:28 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	stack_visualizer(t_data *data, int ac)
{
	t_list	*suisei;
	t_elem	*hosimati;

	suisei = data->a;

	for (int i = 0; i < ac - 1; i++)
	{
		hosimati = suisei->content;
		printf("    %d\n", hosimati->value);
		suisei = suisei->next;
	}
	printf("-----------        -----------\n");
	printf("Stack a             Stack b\n");
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

void	init(t_data *data, int ac, char **av)
{
	int		i;
	t_list	*head;

	i = 1;
	head = ft_lstnew(new_elem(ft_atoi(av[i]), 0));
	data->a = head;
	i++;
	while (i < ac)
	{
		ft_lstadd_back(&head, ft_lstnew(new_elem(ft_atoi(av[i]), 0)));
		i++;
	}
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int	bubble_sort(t_data *data, int ac)
{
	int 	i, j;
	int 	*arr;
	t_elem	*elem;
	t_list	*lst;

	lst = data->a;
	write(1, "\n", 1);
	arr = malloc(sizeof(int) * ac - 1);
	if (!arr)
		return (0);
	for (int o = 1; o < ac; o++)
	{
		elem = lst->content;
		arr[o] = elem->value;
		lst = lst->next;
	}
   	for (i = 0; i < ac - 1; i++)      
       for (j = 0; j < ac - i - 1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);	
	for (int k = 0; k < ac; k++)
		printf("    %d\n", arr[k]);
	printf("-----------\n");
	printf("Sorted values\n");
	free(arr);
	return (1);
}
