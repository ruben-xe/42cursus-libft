/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:36:58 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:27:51 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*s2;
	unsigned int	size;

	s2 = NULL;
	size = ft_strsize(s1);
	if ((s2 = (char *)malloc((size + 1) * sizeof(char))))
		strlcpy(s2, s1, size + 1);
	return (s2);
}
