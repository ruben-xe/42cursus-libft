/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:05:35 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 12:38:38 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	else
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		i = 0;
		if (d < s)
			while (i < len)
			{
				d[i] = s[i];
				i++;
			}
		else
			while (--len >= 0)
				d[len] = s[len];
	}
	return (dst);
}
