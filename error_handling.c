/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:57:55 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 23:00:23 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handling(t_data *data, int ac, char **av)
{
	if (ac == 1)
		return ;
	if (ac < 3 && parse_list(ac, av))
	{
		free(data);
		return ;
	}
	ft_putstr_fd("Error\n", 2);
	free(data);
	return ;
}
