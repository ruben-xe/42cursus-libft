/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:42:58 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/19 16:22:23 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*d;
	const unsigned char	*s;
	unsigned char		chr;
	int					i;

	d = dst;
	s = src;
	chr = c;
	i = -1;
	while (++i < (int)n)
	{
		d[i] = s[i];
		if (s[i] == chr)
			return (&dst[i + 1]);
	}
	return (NULL);
}
