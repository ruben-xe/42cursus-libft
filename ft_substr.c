/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:37:10 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/16 18:35:11 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	char			*str;
	unsigned int	size;

	str = NULL;
	len = s ? len : 0;
	size = ft_strsize(s);
	if ((str = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = -1;
		while ((unsigned int)++i < len && start < size && s[start + i])
			str[i] = s[start + i];
		str[i] = 0;
	}
	return (str);
}
