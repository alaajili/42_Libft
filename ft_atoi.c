/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaajili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:21:46 by alaajili          #+#    #+#             */
/*   Updated: 2021/11/05 15:39:17 by alaajili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	nb;
	int					sign;

	sign = 1;
	nb = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (*str < '0' || *str > '9')
		nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str) - 48;
		if (nb > 9223372036854775807 && sign == 1)
			return (-1);
		if (nb > 9223372036854775807 && sign == -1)
			return (0);
		str++;
	}
	return ((int)nb * sign);
}
