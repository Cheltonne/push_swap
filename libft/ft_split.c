/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:33:44 by chajax            #+#    #+#             */
/*   Updated: 2021/07/07 09:56:05 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strnlen(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	count_words(char *s, char c)
{
	int	wc;

	wc = 0;
	if (!s)
		return (wc);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			wc++;
			s++;
		}
		while (*s && *s != c)
			s++;
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wc;
	char	**strs;

	if (!s)
		return (NULL);
	i = 0;
	wc = count_words((char *)s, c);
	strs = ft_calloc(wc + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	while (*s && i < wc)
	{
		while (*s && *s == c)
			s++;
		*(strs + i) = ft_substr((char *)s, 0, ft_strnlen((char *)s, c));
		while (*s && *s != c)
			s++;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
