/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:50:19 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/12 21:28:37 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*tmp_s;
	char		*tmp_d;
	int			i;

	i = 0;
	tmp_d = dst;
	tmp_s = src;
	while (i < (int)n)
	{
		tmp_d[i] = tmp_s[i];
		if (tmp_s[i] == c)
			return (&tmp_d[i + 1]);
		i++;
	}
	return (NULL);
}
