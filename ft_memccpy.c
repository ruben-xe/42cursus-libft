/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:42:58 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:23:12 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int					i;
	char				*d;
	const unsigned char	*s;
	unsigned char		chr;

	i = -1;
	d = (char *)dst;
	s = (const unsigned char *)src;
	chr = (unsigned char)c;
	while (n > 0 && ++i >= 0 && (unsigned int)i < n)
	{
		d[i] = s[i];
		if (s[i] == chr)
			return (&dst[i + 1]);
	}
	return (NULL);
}
