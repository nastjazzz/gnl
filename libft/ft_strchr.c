/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:13:41 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/24 13:48:16 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)str;
	while (new[i] != c)
	{
		if (new[i] == '\0')
			return (NULL);
		i++;
	}
	return (&new[i]);
}
