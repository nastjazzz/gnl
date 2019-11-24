/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:35:44 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/10 13:12:49 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new;
	size_t			i;

	i = 0;
	new = (unsigned char *)s;
	while (i < n)
	{
		if (new[i] == (unsigned char)c)
			return ((void *)&new[i]);
		i++;
	}
	return (NULL);
}
