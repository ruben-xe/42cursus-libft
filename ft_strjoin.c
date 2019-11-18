/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:00:57 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/18 17:03:51 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	size1;
	unsigned int	size2;
	int				i;

	str = NULL;
	size1 = ft_strsize(s1);
	size2 = ft_strsize(s2);
	if ((str = (char *)malloc((size1 + size2 + 1) * sizeof(char))))
	{
		i = -1;
		while ((unsigned int)++i < size1 && s1[i])
			str[i] = s1[i];
		i = -1;
		while ((unsigned int)++i < size2 && s2[i])
			str[size1 + i] = s2[i];
		str[size1 + i] = 0;
	}
	return (str);
}
