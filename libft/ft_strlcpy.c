/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:06:31 by chajax            #+#    #+#             */
/*   Updated: 2021/06/23 13:42:50 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	src_len;

	i = -1;
	src_len = ft_strlen(src);
	if (!dst || src[src_len])
		return (src_len);
	while (dstsize-- && src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (src_len);
}
