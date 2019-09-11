/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:52:53 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/11 22:51:21 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*begin;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			begin = haystack;
			while (*haystack == *needle)
			{
				haystack++;
				needle++;
				if (!*needle)
					return((char *)begin);
			}
			if (needle + 1 && needle + 1 != haystack + 1)
				return (NULL);
		}
		haystack++;
	}
	return (NULL);
}
