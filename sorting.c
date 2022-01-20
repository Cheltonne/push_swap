/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:48:24 by chajax            #+#    #+#             */
/*   Updated: 2022/01/20 01:27:13 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_data *data)
{
	int	j;
	int num;
	t_elem	*a_top;

	for (int i = 0; !is_sorted(data) ; ++i)
	{
    	for(j = 0; j < data->size - 1; ++j)
    	{        
			a_top = data->a->content;
			num = a_top->index;
			if (((num >> i)&1) == 1)
				ra(data); 
			else
				pb(data);
		}
		while (ft_lstsize(data->b) != 0)
			pa(data);
	}
}
