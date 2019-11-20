/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:59:35 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/19 16:23:04 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;

	d = dst;
	s = src;
	i = -1;
	while ((d || s) && ++i < (int)n)
		d[i] = s[i];
	return (dst);
}
