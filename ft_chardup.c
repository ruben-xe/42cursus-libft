/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chardup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 13:08:42 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/21 13:11:12 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chardup(const char c)
{
	char	*s;

	if ((s = (char *)ft_calloc(2, sizeof(char))))
		*s = c;
	return (s);
}
