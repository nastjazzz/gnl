/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:10:26 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/10 11:48:58 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int	i;

	i = 0;
	if (len == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < len - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
