/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:49:44 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:24:26 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const char		*src;
	char			chr;

	src = (const char *)s;
	chr = (char)c;
	if (n > 0)
	{
		i = 0;
		while (i < n && src[i] != chr)
			i++;
		if (i < n && src[i] == chr)
			return ((void *)&s[i]);
	}
	return (NULL);
}
