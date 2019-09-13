/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:53:18 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/14 01:47:00 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*begin;
	char	*tmp;

	tmp = (char *)needle;
	if (!*needle)
		return ((char *)haystack);
	while (len > 0 && *haystack)
	{
		if (*haystack == *needle)
		{
			begin = (char *)haystack;
			while (*haystack++ == *needle++ && len--)
				if (!*needle)
					return ((char *)begin);
			if (needle + 1 && needle + 1 != haystack + 1)
			{
				haystack = begin;
				needle = tmp;
			}
		}
		len--;
		haystack++;
	}
	return (NULL);
}
