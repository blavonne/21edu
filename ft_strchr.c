/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:51:54 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/11 22:51:21 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int 	i;

	i = 0;
	if (c == '\0')
		return (&s[ft_strlen(s)]);
	else
		{
			while (s[i])
			{
				if (s[i] == c)
					return (&s[i]);
				i++;
			}
		}
	return (NULL);
}
