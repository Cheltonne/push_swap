/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:41:15 by chajax            #+#    #+#             */
/*   Updated: 2021/07/07 12:53:53 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nlen(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	n /= 10;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		nlen;
	long	nbr;

	nbr = (long) n;
	nlen = ft_nlen(nbr);
	res = ft_calloc(nlen + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	res[nlen] = '\0';
	while (nlen)
	{
		res[--nlen] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
