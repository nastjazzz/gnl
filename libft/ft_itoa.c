/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:52:49 by hhobert           #+#    #+#             */
/*   Updated: 2019/09/18 21:06:27 by hhobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_n(int n)
{
	int		len;

	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int nbr)
{
	char	*str;
	int		len;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len_n(nbr);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	str[len] = '\0';
	while (len > 0 && nbr / 10)
	{
		str[len - 1] = nbr % 10 + 48;
		nbr /= 10;
		len--;
	}
	str[len - 1] = nbr % 10 + 48;
	return (str);
}
