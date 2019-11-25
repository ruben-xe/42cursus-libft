/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:41:23 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/21 15:03:37 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	int					i;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	i = -1;
	while (++i < (int)n)
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	return (0);
}
