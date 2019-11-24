/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:14:48 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/14 12:06:14 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	if (s < d)
		while (len--)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
