/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:35:03 by chajax            #+#    #+#             */
/*   Updated: 2022/01/19 00:29:33 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac < 3)
		return (1);
	if (!parse_list(ac, av))
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
	//stack_visualizer(data, 42);
	set_indexes(data);
	//stack_visualizer(data, 1);
	set_bin_val(data, 1);
	sorting(data);
	ft_lstclear(&data->a, &del);
	ft_lstclear(&data->a_cpy, &del);
	free(data);
	return (0);
}
