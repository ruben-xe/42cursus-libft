/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:19:15 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/20 11:34:00 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int n;
	int start;
	int end;

	i = ft_strsize(s1) - 1;
	end = 0;
	while (s1 && set && i != end && (end = --i) > 0)
	{
		n = -1;
		while (++n >= 0 && set[n])
			if (s1[i] == set[n] && --end >= 0)
				break ;
	}
	i = -1;
	start = 0;
	while (s1 && set && i != start && (start = ++i) >= 0 && i < end && s1[i])
	{
		n = -1;
		while (++n >= 0 && set[n])
			if (s1[i] == set[n] && ++start > 0)
				break ;
	}
	n = s1 && start != end ? end - start + 1 : 0;
	return (ft_substr(s1, start, n));
}
