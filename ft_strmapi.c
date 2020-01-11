/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:22:11 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 12:55:07 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	str = NULL;
	len = 0;
	while (s && s[len])
		len++;
	if ((str = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = 0;
		while (i < len && s && s[i] && f)
		{
			str[i] = f((unsigned int)i, (char)s[i]);
			i++;
		}
		str[i] = 0;
	}
	return (str);
}
