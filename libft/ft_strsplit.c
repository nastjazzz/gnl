/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:34:40 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/24 13:52:53 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *str, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0])
		word++;
	return (word);
}

static int	ft_len_word(char const *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	ft_free(char **res)
{
	int		i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		res[i] = NULL;
		i++;
	}
	free(res);
	res = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s || !(res = (char **)malloc(sizeof(char *) *
					(ft_count_word(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			if (!(res[j++] = ft_strsub(s, i, ft_len_word(s + i, c))))
			{
				ft_free(res);
				return (NULL);
			}
		i = i + ft_len_word(s + i, c);
	}
	res[j] = 0;
	return (res);
}
