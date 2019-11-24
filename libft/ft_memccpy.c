/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:21:02 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/14 12:51:22 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src,
		int c, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	a;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	a = (unsigned char)c;
	while (i < len)
	{
		d[i] = s[i];
		i++;
		if (a == s[i - 1])
			return (&d[i]);
	}
	return (NULL);
}
