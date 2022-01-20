/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:35:03 by chajax            #+#    #+#             */
/*   Updated: 2022/01/20 01:39:28 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*data;

	if (!parse_list(ac, av) || ac < 3)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	data = malloc(sizeof(t_data));
	if (!data)
		return (1);
	data->size = ac;
	init(data, av);
	//stack_visualizer(data, 1);
	bubble_sort(data);
	set_indexes(data);
	//stack_visualizer(data, 1);
	sort_big_stack(data);
	stack_visualizer(data, 1);
	ft_lstclear(&data->a, &del);
	ft_lstclear(&data->a_cpy, &del);
	free(data);
	return (0);
}
