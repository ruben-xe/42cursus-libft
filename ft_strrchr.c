/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:57:53 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:31:41 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	if (!c)
		return ((char *)&s[size]);
	else
	{
		while (--size >= 0)
		{
			if (s[size] == (char)c)
				return ((char *)&s[size]);
		}
	}
	return (NULL);
}
