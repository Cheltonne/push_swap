/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:35:03 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 12:08:02 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*data;
	t_list	*lst;
	t_list	*lst_cpy;

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
	lst = data->a;
	lst_cpy = data->a_cpy;
	bubble_sort(data);
	set_indexes(data, lst, lst_cpy);
	if (ac == 4)
		sort_3(data, lst);
	else if (ac == 6)
		sort_5(data, lst);
	else 
		sort_big_stack(data);
	ft_lstclear(&data->a, &del);
	ft_lstclear(&data->a_cpy, &del);
	free(data);
	return (0);
}
