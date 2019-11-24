/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:52:54 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/19 14:36:53 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int j;
	int k;

	k = 0;
	i = 0;
	if (s2[0] == 0)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			k = i;
			while (s1[k] == s2[j] && s2[j])
			{
				k++;
				j++;
			}
			if (s2[j] == '\0')
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
