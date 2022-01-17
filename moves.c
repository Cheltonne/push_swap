/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:10:01 by chajax            #+#    #+#             */
/*   Updated: 2022/01/17 18:10:51 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
