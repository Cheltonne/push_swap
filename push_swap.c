/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:35:03 by chajax            #+#    #+#             */
/*   Updated: 2022/01/17 18:29:22 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (1);
	if (ac < 3)
	{
		free(data);
		return (1);
	}
	if (!parse_list(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	init(data, ac, av);
	stack_visualizer(data, ac);
	bubble_sort(data, ac);
	ft_lstclear(&data->a, &del);
	free(data);
	return (0);
}
