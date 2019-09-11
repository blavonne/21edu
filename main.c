/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:52:52 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/11 22:51:21 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	char s1[] = "qt";
	char	s[] = "qwerety";

	printf("%s\n", ft_strstr(s, s1));
	printf("%s\n", strstr(s, s1));
	return (0);
}