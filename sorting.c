/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:48:24 by chajax            #+#    #+#             */
/*   Updated: 2022/01/18 23:21:40 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_data *data)
{
	int size = data->size;
	int max_num = size - 1; // the biggest number in a is stack_size - 1
	int max_bits = 0; // how many bits for max_num 
	t_elem	*a_top = data->a->content;

	while ((max_num >> max_bits) != 0)
		++max_bits;
	for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
	{
    	for(int j = 0 ; j < size ; ++j)
    	{        
			int num = a_top->value; // top number of A        
			if (((num >> i)&1) == 1)
				ra(data); 
        // if the (i + 1)-th bit is 1, leave in stack a
			else
				pb(data);
		} // put into boxes done
	while (data->b->content)
		pa(data); // while stack b is not empty, do pa
	}
}
