/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:55:16 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 22:39:16 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_all_digits(int ac, char **av)
{
	int		i;
	size_t	o;

	i = 1;
	while (i < ac)
	{
		o = 0;
		while (o < ft_strlen(av[i]))
		{
			if (av[i][o] == '-' && o == 0)
				o++;
			if (!ft_isdigit(av[i][o]))
				return (0);
			o++;
		}
		i++;
	}
	return (1);
}

int	is_int(char *nb)
{
	long long	n;

	n = ft_atoi(nb);
	if ((n >= -2147483648 && n <= 2147483647) && ft_strlen(nb) < 12)
		return (1);
	return (0);
}

int	has_duplicate(int ac, char **av)
{
	int			i;
	int			j;
	int			o;
	long long	tmp;

	j = 1;
	while (j < ac)
	{
		tmp = ft_atoi(av[j]);
		o = j;
		i = j;
		while (o < ac - 1)
		{
			if (tmp == ft_atoi(av[i + 1]))
				return (1);
			o++;
			i++;
		}
		j++;
	}
	return (0);
}

int	parse_list(int size, char **av)
{
	int	i;

	i = 1;
	if (size == 1)
		return (0);
	while (i < size)
	{
		if ((ft_atoi(av[i]) == 0 && av[i][0] != '0') || !is_int(av[i]) ||
				has_duplicate(size, av) || !is_all_digits(size, av))
			return (0);
		i++;
	}
	return (1);
}
