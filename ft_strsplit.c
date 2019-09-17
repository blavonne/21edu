/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:45:58 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/17 17:48:23 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strtrim_c(char const *s, char c)
{
	size_t	start;
	size_t	end;
	char	*tmp;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (s[start] == c)
		start++;
	if (end == start)
		return (tmp = ft_strnew(0));
	while (s[end - 1] == c)
		end--;
	tmp = ft_strsub(s, start, end - start);
	return (tmp);
}

static int	ft_count_words(char *tmp, char c)
{
	size_t	i;
	int		count;

	count = 0;
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] != c && (tmp[i + 1] == c || tmp[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*get_next_word(char *str, char c)
{
	size_t	i;
	char	*end;
	char	*buf;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	end = &str[i];
	buf = ft_strsub(str, 0, end - &str[0]);
	return (buf);
}

static void	ft_push_in_arr(char **arr, char *str, char c, int words)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	while (i < words)
	{
		j = 0;
		word = get_next_word(str, c);
		str = &str[ft_strlen(word)];
		while (str[j] == c)
			j++;
		str = &str[j];
		arr[i] = ft_strdup(word);
		free(word);
		i++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	*tmp;
	char	**buf;
	size_t	words;

	if (!s)
		return (NULL);
	if (!(tmp = ft_strtrim_c(s, c)))
		return (NULL);
	words = ft_count_words(tmp, c);
	if (!(buf = (char **)malloc(sizeof(char *) * words + 1)))
		return (NULL);
	ft_push_in_arr(buf, tmp, c, words);
	buf[words] = NULL;
	return (buf);
}
