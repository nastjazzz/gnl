/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:38:54 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/17 14:25:29 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	first;
	size_t	last;
	size_t	len;

	first = 0;
	if (!s)
		return (NULL);
	while (s[first] &&
			(s[first] == ' ' || s[first] == '\n' || s[first] == '\t'))
		first++;
	last = ft_strlen(s);
	while (first < last &&
			(s[last - 1] == ' ' || s[last - 1] == '\n' || s[last - 1] == '\t'))
		last--;
	if (first == last)
		return (ft_strnew(1));
	len = last - first;
	return (ft_strsub(s, first, len));
}
