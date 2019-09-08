/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:52:52 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/08 19:14:06 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main()
{
	char s1[4] = "qwe";
	char *s2 = "rty";
	char large[7] = "qwerty";
	char small[3] = "az";
	printf("my: %i vs string: %lu\n", ft_strlen("qwerty"), strlen("qwerty"));
	printf("my: %s vs string: %s\n", ft_strdup("azaza"), strdup("azaza"));
	printf("my: %s vs string: %s\n", ft_strcpy(s1, s2), strcpy(s1, s2));
	//printf("my: %s vs string: %s\n", ft_strncpy(large, small, 3), strncpy(large, small, 3));
	//printf("my: %s vs string: %s\n", ft_strncpy(large, small, 2), strncpy(large, small, 2));
	//printf("my: %s vs string: %s\n", ft_strncpy(small, large, 3), strncpy(small, large, 3));
	printf("my: %s vs string: %s\n", ft_strncpy(small, large, 2), strncpy(small, large, 2));
	return (0);
}