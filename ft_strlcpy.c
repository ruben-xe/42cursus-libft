/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:24:17 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 12:54:37 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = 0;
	if (dst)
	{
		while (src && src[srclen])
			srclen++;
		if (dstsize > 0)
		{
			i = 0;
			while (i < (dstsize - 1) && src && src[i])
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = 0;
		}
	}
	return (srclen);
}
