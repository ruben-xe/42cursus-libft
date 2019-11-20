/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:55:18 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/19 17:18:34 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	int		i;

	dstlen = ft_strnlen(dst, dstsize);
	srclen = ft_strlen(src);
	if (dstlen == dstsize)
		return (dstsize + srclen);
	if (dstsize > dstlen)
	{
		i = -1;
		while (++i < (int)(dstsize - dstlen - 1) && src[i])
			dst[dstlen + i] = src[i];
		dst[dstlen + i] = 0;
	}
	return (dstlen + srclen);
}
