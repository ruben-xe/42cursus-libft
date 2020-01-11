/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 11:10:20 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/20 11:11:24 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa(unsigned int n)
{
	int		i;
	long	base;
	int		len;
	char	*nbr;

	base = 1;
	len = 1;
	nbr = NULL;
	while ((base = base * 10) && n / base > 0)
		len++;
	len = base < 0 ? len + 1 : len;
	if ((nbr = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = 0;
		while (i < len && (base = base / 10))
		{
			nbr[i++] = '0' + (n / base);
			n %= base;
		}
		nbr[i] = 0;
	}
	return (nbr);
}
