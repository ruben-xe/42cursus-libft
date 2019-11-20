/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:05:35 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/19 16:23:18 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	int					size;
	unsigned char		*d;
	const unsigned char	*s;

	i = -1;
	size = len;
	if (dst || src)
	{
		d = dst;
		s = src;
		if (d < s)
			while (++i < size)
				d[i] = s[i];
		else
			while (--size >= 0)
				d[size] = s[size];
	}
	return (dst);
}
