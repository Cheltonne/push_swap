/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:25:13 by chajax            #+#    #+#             */
/*   Updated: 2022/01/15 23:09:55 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*new_elem(int value, int index)
{
	t_elem	*new;

	new = malloc(sizeof(t_elem));
	if (!new)
		return (NULL);
	new.value = value;
	new.index = index;
	return (new);
}

void	init(int ac, char **av)
{
	t_data	*data;
	int		i;

	data.a = ft_lstnew(new_elem())
}

void	ra(t_data *data)
{
	t_list	*tmp;
	int		lstsize;
	int		i;

	i = 0;
	lstsize = ft_lstsize(data->a);
	tmp = data->a->next;
	while (i < lstsize - 1)
		tmp = tmp->next;
	tmp->next = data->a;
	data->a->next = NULL;
}
