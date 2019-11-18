/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:22:11 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/16 18:38:43 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	size;
	int				i;

	str = NULL;
	if (s && f)
	{
		size = ft_strsize(s);
		if ((str = (char *)malloc((size + 1) * sizeof(char))))
		{
			i = -1;
			while ((unsigned int)++i < size)
				str[i] = f((unsigned int)i, (char)s[i]);
			str[i] = 0;
		}
	}
	return (str);
}
