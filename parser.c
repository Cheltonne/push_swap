/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:55:16 by chajax            #+#    #+#             */
/*   Updated: 2022/01/15 19:58:02 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_list(int ac, char **av)
{
	size_t	i;
	char	**list;

	list = malloc(sizeof(char *) * ac - 1)
	if (!list)
		return (0);
	i = 1;
	while (i < ac)
	{
		list[i] = av[i];
		i++;
	}
	return (1);
}
