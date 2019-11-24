/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:44:03 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/12 10:52:30 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	*result;
	int		i;

	i = 0;
	result = NULL;
	while (str[i])
	{
		if (str[i] == (char)c)
			result = (char *)&str[i];
		i++;
	}
	if (str[i] == (char)c)
		result = (char *)&str[i];
	return (result);
}
