/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:57:53 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 12:45:43 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	if (!c && s[len] == c)
		return ((char *)&s[len]);
	else
		while (--len >= 0)
			if (s[len] == (char)c)
				return ((char *)&s[len]);
	return (NULL);
}
