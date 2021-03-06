/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:21:01 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 21:15:52 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del(void *content)
{
	if (!content)
		return ;
	free(content);
	content = NULL;
}

void	annihilate_linked_lists(t_data *data)
{
	ft_lstclear(&data->a, &del);
	ft_lstclear(&data->a_cpy, &del);
	ft_lstclear(&data->b, &del);
	free(data);
}
