/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 03:10:15 by blavonne          #+#    #+#             */
/*   Updated: 2020/08/06 17:54:55 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = b;
	while (i < (int)len)
	{
		str[i] = (char)c;
		i++;
	}
	return (b);
}
