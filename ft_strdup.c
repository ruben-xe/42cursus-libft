/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:36:58 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/20 14:38:42 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size;
	int		i;

	s2 = NULL;
	size = ft_strsize(s1);
	if ((s2 = (char *)malloc(size * sizeof(char))))
	{
		i = -1;
		while (++i < (int)size)
			s2[i] = s1[i];
	}
	return (s2);
}
