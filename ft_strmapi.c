/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:22:11 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/20 16:17:56 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	int		i;

	str = NULL;
	len = ft_strsize(s) - 1;
	if ((str = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = -1;
		while (++i < (int)len && s && s[i] && f)
			str[i] = f((unsigned int)i, (char)s[i]);
		str[i] = 0;
	}
	return (str);
}
