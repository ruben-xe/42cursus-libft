/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:59:35 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/21 15:05:21 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	int					i;

	if (!src && !dst)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	i = -1;
	while (++i < (int)n)
		d[i] = s[i];
	return (dst);
}
