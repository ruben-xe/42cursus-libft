/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:55:18 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:42:10 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int				i;
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	res;

	res = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize > dstlen)
	{
		i = -1;
		while (++i >= 0 && (unsigned int)i < dstsize - dstlen - 1 && src[i])
			dst[dstlen + i] = src[i];
		dst[dstlen + i] = 0;
		res = dstlen + srclen;
	}
	else
		res = dstsize + srclen;
	return (res);
}
