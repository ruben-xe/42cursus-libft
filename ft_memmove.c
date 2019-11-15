/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:05:35 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:34:24 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	int		size;
	char	*d;
	char	*s;

	if ((dst || src) && len > 0)
	{
		i = -1;
		size = len;
		d = (char *)dst;
		s = (char *)src;
		if (d > s)
		{
			while (--size >= 0)
				d[size] = s[size];
		}
		else
		{
			while (++i >= 0 && i < size)
				d[i] = s[i];
		}
	}
	return (dst);
}
