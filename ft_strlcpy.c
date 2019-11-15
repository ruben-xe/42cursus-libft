/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:24:17 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:12:03 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int				i;
	unsigned int	srclen;

	srclen = 0;
	if (dst)
	{
		srclen = ft_strsize(src);
		if (dstsize > 0)
		{
			i = -1;
			while (++i >= 0 && (unsigned int)i < dstsize - 1 && src && src[i])
				dst[i] = src[i];
			dst[i] = 0;
		}
	}
	return (srclen);
}
