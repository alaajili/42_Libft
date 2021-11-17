/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaajili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:05:32 by alaajili          #+#    #+#             */
/*   Updated: 2021/11/07 10:06:27 by alaajili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!str && n == 0)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *) str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j] && i + j < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *) str + i);
			j++;
		}
		i++;
	}
	return (0);
}
