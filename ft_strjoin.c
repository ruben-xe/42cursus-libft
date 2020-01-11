/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:00:57 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 13:01:10 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	s1len;
	unsigned int	s2len;
	size_t			i;

	str = NULL;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if ((str = (char *)malloc((s1len + s2len + 1) * sizeof(char))))
	{
		i = 0;
		while (i < s1len && s1 && s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < s2len && s2 && s2[i])
		{
			str[s1len + i] = s2[i];
			i++;
		}
		str[s1len + i] = 0;
	}
	return (str);
}
