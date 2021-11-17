/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaajili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:44:30 by alaajili          #+#    #+#             */
/*   Updated: 2021/11/06 18:52:40 by alaajili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srclen;
	size_t	dstlen;

	if (!dest && n == 0)
		return (ft_strlen(src));
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	if (n < dstlen)
		return (srclen + n);
	else
	{
		dest = dest + dstlen;
		ft_strlcpy(dest, src, n - dstlen);
		return (srclen + dstlen);
	}
}
