/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:47:20 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/17 22:28:08 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		toa[] = "0123456789abcdef";

static int	ft_nbr_len(int n)
{
	int		count;

	count = 1;
	while (n / 10)
	{
		count++;
		n = n / 10;
	}
	if (n < 0)
		return (count + 1);
	else
		return (count);
}

static char	*ft_reverse(char *str)
{
	char	c;
	size_t	begin;
	size_t	end;

	begin = 0;
	end = ft_strlen(str) - 1;
	while (begin < end)
	{
		c = str[begin];
		str[begin] = str[end];
		str[end] = c;
		begin++;
		end--;
	}
	return (str);
}

static char	radix(int res)
{
	int 	index;

	index = res % 10;
	return (toa[index]);
}

char		*ft_itoa(int n)
{
	char	*buf;
	int		i;
	int		res;

	if (n >= 0)
		res = n;
	else
		res = -n;
	i = 0;
	if (!(buf = (char *)malloc(sizeof(char) * (size_t)ft_nbr_len(n) + 1)))
		return (NULL);
	while (res)
	{
		buf[i] = radix(res);
		res /= 10;
		i++;
	}
	if (n < 0)
		buf[i++] = '-';
	buf[i] = '\0';
	return (ft_reverse(buf));
}
