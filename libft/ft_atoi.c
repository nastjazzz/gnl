/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:16:45 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/17 11:03:58 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_atoi(const char *str)
{
	int					minus;
	unsigned long long	result;

	minus = 0;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = 1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = (*str - '0') + (result * 10);
		if (result * 1000 < result)
			return (minus ? 0 : -1);
		str++;
	}
	return (minus ? (-1 * result) : result);
}
