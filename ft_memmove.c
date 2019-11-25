/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:05:35 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/21 15:06:47 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	int				size;
	int				i;

	if (!src && !dst)
		return (NULL);
	else
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		size = (int)len;
		i = -1;
		if (d < s)
			while (++i < size)
				d[i] = s[i];
		else
			while (--size >= 0)
				d[size] = s[size];
	}
	return (dst);
}
