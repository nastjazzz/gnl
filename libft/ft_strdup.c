/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:07:45 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/09 17:34:23 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*cpy_src;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (!(cpy_src = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (src[i])
	{
		cpy_src[i] = src[i];
		i++;
	}
	cpy_src[i] = '\0';
	return (cpy_src);
}
