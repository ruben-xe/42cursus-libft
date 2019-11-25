/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:18:36 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/21 15:25:27 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (!(j = 0) && i < len && haystack[i] && needle[j])
	{
		if (haystack[i] == needle[j])
		{
			while (i + j < len && (haystack[i + j] || needle[j]) &&
					haystack[i + j] == needle[j])
				j++;
			if (!needle[j] && haystack[i])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	if (needle && !needle[j])
		return ((char *)haystack);
	return (NULL);
}
