/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:18:36 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:30:10 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < len && haystack[i] && needle[0] && haystack[i] != needle[0])
		i++;
	j = 0;
	while (i + j < len && (haystack[i + j] || needle[j]) &&
			haystack[i + j] == needle[j])
		j++;
	if (!needle[j] && haystack[i])
		return ((char *)&haystack[i]);
	return (NULL);
}
