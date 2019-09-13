/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:22:00 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/14 00:30:57 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	int 	len;

	j = 0;
	len = ft_strlen(dst);
	if (len + 1 > (int)size)
		return ((size_t)ft_strlen(src) + size);
	if ((int)size > ft_strlen(dst) + 1)
	{
		i = ft_strlen(dst);
		while (i < (int)(size - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (len + ft_strlen(src));
}
