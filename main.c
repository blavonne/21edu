/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:52:52 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/13 20:14:03 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"


int main()
{
	char s[] = "qweerty";
	char s2[] = "we";
	printf("%s\n", ft_strstr(s, s2));
	printf("%s\n", strstr(s, s2));
	printf("%s\n", ft_strnstr(s, s2, 16));
	printf("%s\n", strnstr(s, s2, 16));
	return (0);
}