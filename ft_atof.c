/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:12:17 by rsoto-in          #+#    #+#             */
/*   Updated: 2020/01/28 19:54:53 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_atof(const char *str)
{
	int		i;
	char	*nbr;
	float	n;
	float	base;

	n = ft_atoi(str);
	if ((nbr = ft_strchr(str, '.')))
	{
		i = 0;
		while (nbr && nbr[i] && nbr[i] == '.')
			i++;
		base = 10;
		while (nbr[i] >= '0' && nbr[i] <= '9')
		{
			if (nbr[i] - '0')
				n += 1.0 / (base / (nbr[i] - '0'));
			base *= 10;
			i++;
		}
	}
	return (n);
}
