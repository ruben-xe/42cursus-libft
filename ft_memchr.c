/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:49:44 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/21 15:35:54 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*src;
	int					i;

	src = (unsigned const char *)s;
	i = -1;
	while (++i < (int)n)
		if (src[i] == (unsigned char)c)
			return ((void *)&s[i]);
	return (NULL);
}
