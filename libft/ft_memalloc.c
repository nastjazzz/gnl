/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:10:05 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/18 16:35:46 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = (char *)malloc(size)))
		return (NULL);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
