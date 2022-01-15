/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:07:45 by chajax            #+#    #+#             */
/*   Updated: 2021/06/21 13:09:08 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*src_ptr;
	char		*dest_ptr;

	src_ptr = src;
	dest_ptr = dest;
	if (!dest || !src)
		return (NULL);
	while (n && *src_ptr != c)
	{
		*(dest_ptr++) = *(src_ptr++);
		n--;
	}
	if (*src_ptr == c && n)
	{
		*dest_ptr = *src_ptr;
		dest = dest_ptr + 1;
		return (dest);
	}
	return (NULL);
}
