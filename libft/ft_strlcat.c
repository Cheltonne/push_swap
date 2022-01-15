/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 15:12:40 by chajax            #+#    #+#             */
/*   Updated: 2021/06/26 19:51:53 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	o;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	o = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (dest[i])
		i++;
	if (size <= dest_len)
		return (size + src_len);
	while (src[o] && o < (size - dest_len - 1))
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}
