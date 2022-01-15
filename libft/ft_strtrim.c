/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:10:56 by chajax            #+#    #+#             */
/*   Updated: 2021/06/02 21:10:14 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		src_len;
	char	*new;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	src_len = ft_strlen(s1) - 1;
	while (src_len && ft_strchr(set, s1[src_len]))
		src_len--;
	new = ft_substr(s1, 0, src_len + 1);
	return (new);
}
