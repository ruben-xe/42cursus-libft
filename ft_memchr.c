/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:49:44 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/20 15:53:02 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		chr;
	int					i;

	src = s;
	chr = c;
	i = -1;
	while (++i < (int)n)
		if (src[i] == chr)
			return ((void *)&s[i]);
	return (NULL);
}
