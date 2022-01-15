/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:23:03 by chajax            #+#    #+#             */
/*   Updated: 2021/06/22 12:41:16 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src_ptr;
	char		*dest_ptr;
	int			i;

	src_ptr = src;
	dest_ptr = dest;
	if (!dest || !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			dest_ptr[i] = src_ptr[i];
			i--;
		}
	}
	return (dest);
}
