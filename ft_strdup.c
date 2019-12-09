/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:36:58 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 12:52:48 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;
	size_t	i;

	s2 = NULL;
	len = 0;
	while (s1 && s1[len])
		len++;
	if ((s2 = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = 0;
		while (i < len + 1)
		{
			s2[i] = s1[i];
			i++;
		}
	}
	return (s2);
}
