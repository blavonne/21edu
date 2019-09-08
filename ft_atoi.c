/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:32:19 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/08 22:38:04 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*нужно проверить на переполнение снизу*/

static int	is_space(char c)
{
	if (c >= 0 && c <= 32)
		return (1);
	return (0);
}

static int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	is_not_num(char c)
{
	if ((c > 32 && c < 48) || (c > 57 && c < 127))
		return (1);
	return (0);
}

static int	full_checker(char *str)
{
	int		i;

	i = 0;
	while (is_num(str[i]))
		i++;
	if (i > 9)
}

int		ft_atoi(const char *str)
{
	int		i;
	int 	res;
	int 	sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i])
	{
		while(is_space(str[i]))
			i++;
		if(str[i] == '-' && is_num(str[i + 1]))
			sign = -1;
		while(is_num(str[i]))
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		if (is_not_num(str[i]))
			return (0);
	}
	return (sign * res);
}