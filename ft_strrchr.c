/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:57:53 by rsoto-in          #+#    #+#             */
/*   Updated: 2020/01/11 12:48:33 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (!c && s[len] == c)
		return ((char *)&s[len]);
	else
		while (--len >= 0)
			if (s[len] == (char)c)
				return ((char *)&s[len]);
	return (NULL);
}
