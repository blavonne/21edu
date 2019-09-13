/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:53:18 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/12 22:10:20 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	find(const char *str, const char *find, size_t i, size_t len)
{
	size_t	j;
	size_t	l;

	j = 0;
	l = 0;
	while (str[j++] == find[l++] && i < len)
		i++;
	if (!str[j])
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*begin;
	size_t		i;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (i < len)
	{
		if (haystack[i] == *needle)
		{
			while (haystack[i] == *needle && i < len)
				i++;
			begin = &haystack[i - 1];
			if (find(begin, needle, i, len))
				return ((char *)begin);
			else
				return (0);
		}
		i++;
	}
	return (NULL);
}
