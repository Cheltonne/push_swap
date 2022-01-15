/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax </var/spool/mail/chajax>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:51:33 by chajax            #+#    #+#             */
/*   Updated: 2021/06/22 14:31:32 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_cpy;
	const unsigned char	*s2_cpy;

	s1_cpy = (const unsigned char *)s1;
	s2_cpy = (const unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && (*s1_cpy == *s2_cpy))
	{
		s1_cpy++;
		s2_cpy++;
	}
	return (*s1_cpy - *s2_cpy);
}
