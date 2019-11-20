/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:22:11 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/20 11:54:16 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;
	int				i;

	str = NULL;
	len = ft_strsize(s) - 1;
	if ((str = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = -1;
		while ((unsigned int)++i < len && s && s[i] && f)
			str[i] = f((unsigned int)i, (char)s[i]);
		str[i] = 0;
	}
	return (str);
}
