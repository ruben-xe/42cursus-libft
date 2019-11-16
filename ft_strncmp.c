/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:50:39 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 18:54:43 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				res;

	i = 0;
	while (n > 0 && i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (res = (unsigned char)s1[i] > (unsigned char)s2[i] ? 1 : -1);
		i++;
	}
	return (0);
}
