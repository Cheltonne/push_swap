/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:48:24 by chajax            #+#    #+#             */
/*   Updated: 2022/01/19 17:15:17 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_data *data)
{
	int max_num = data->size - 1;
	int max_bits = 0;
	int	j;
	t_elem	*a_top = data->a->content;

	while ((max_num >> max_bits) != 0)
		++max_bits;
	for (int i = 0; i < max_bits; ++i)
	{
    	for(j = 0; j < data->size; ++j)
    	{        
			int num = a_top->index;
			if (((num >> i)&1) == 1)
				ra(data); 
			else
				pb(data);
		}
		while (ft_lstsize(data->b) != 1)
			pa(data);
	}
}
