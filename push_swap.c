/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:35:03 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 22:55:06 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*data;
	t_list	*lst;
	t_list	*lst_cpy;

	data = ft_calloc(sizeof(t_data), 1);
	if (!data)
		return (1);
	if (!parse_list(ac, av))
	{
		error_handling(data, ac, av);
		return (1);
	}
	data->size = ac;
	init(data, av);
	lst = data->a;
	lst_cpy = data->a_cpy;
	bubble_sort(data, lst);
	set_indexes(data, lst, lst_cpy);
	sort_choice(data);
	annihilate_linked_lists(data);
	return (0);
}
