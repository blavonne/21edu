/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:33:49 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/08 19:07:22 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int 	i;

	i = 0;
	while (src[i] && i < (int)len)
	{
		dst[i] = src[i];
		i++;
	}
	if (ft_strlen(src) < (int)len)
	{
		while (i < ft_strlen(dst))
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
