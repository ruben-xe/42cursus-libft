/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:09:29 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/20 16:17:51 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	long	base;
	int		len;
	char	*nbr;

	base = n < 0 ? -1 : 1;
	len = 1;
	nbr = NULL;
	while ((base = base * 10) && n / base > 0)
		len++;
	len = base < 0 ? len + 1 : len;
	if ((nbr = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = 0;
		if (n < 0)
			nbr[i++] = '-';
		while (i < len && (base = base / 10))
		{
			nbr[i++] = '0' + (n / base);
			n %= base;
		}
		nbr[i] = 0;
	}
	return (nbr);
}
