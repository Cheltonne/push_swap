/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:15:20 by chajax            #+#    #+#             */
/*   Updated: 2021/07/14 12:05:04 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*src_ptr;
	char		*dest_ptr;

	if (!dest)
		return (NULL);
	src_ptr = src;
	dest_ptr = dest;
	while (n--)
		*(dest_ptr++) = *(src_ptr++);
	return ((void *)dest);
}
