/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:59:08 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/14 12:52:35 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dest);
	if (i < size)
		ft_strncat(dest, src, (size - i - 1));
	if (i > size)
		return (size + ft_strlen(src));
	return (i + ft_strlen(src));
}
