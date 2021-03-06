/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:37:10 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 12:58:39 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;
	int		size;

	str = NULL;
	size = 0;
	while (s && s[size])
		size++;
	size -= start;
	if (size > 0)
		len = (size_t)size < len ? size : len;
	else
		len = 0;
	if ((str = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = -1;
		while ((size_t)++i < len && s[start + i])
			str[i] = s[start + i];
		str[i] = 0;
	}
	return (str);
}
