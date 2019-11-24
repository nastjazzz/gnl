/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:13:28 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/14 12:52:10 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str1);
	while (i < n && str2[i])
	{
		str1[len] = str2[i];
		len++;
		i++;
	}
	str1[len] = '\0';
	return (str1);
}
