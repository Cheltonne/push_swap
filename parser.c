/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:55:16 by chajax            #+#    #+#             */
/*   Updated: 2022/01/15 22:53:07 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_list(int ac, char **av)
{
	int			i;
	size_t		o;

	i = 1;
	while (i < ac)
	{
		o = 0;
		while(o < ft_strlen(av[i]))
		{
			if (!ft_isdigit(av[i][o]))
					return (0);
			o++;
		}
		i++;
	}
	return (1);
}
