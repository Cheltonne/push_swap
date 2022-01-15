/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:47:46 by chajax            #+#    #+#             */
/*   Updated: 2021/07/14 11:53:48 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (NULL);
	else if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	else if (len <= (ft_strlen(s) - start))
	{
		new = malloc(sizeof(char) * len + 1);
		if (!new)
			return (NULL);
		ft_strlcpy(new, &s[start], len + 1);
		return (new);
	}
	else
	{
		new = malloc(sizeof(char) * ft_strlen(s) - start + 1);
		if (!new)
			return (NULL);
		ft_strlcpy(new, s + start, ft_strlen(s) + 1);
		return (new);
	}
}
