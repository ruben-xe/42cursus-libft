/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:09:29 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/18 15:17:05 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	long	base;
	int		size;
	char	*nbr;

	base = n < 0 ? -1 : 1;
	size = 1;
	nbr = NULL;
	while ((base = base * 10) && n / base > 0)
		size++;
	size = base < 0 ? size + 1 : size;
	if ((nbr = malloc((size + 1) * sizeof(char))))
	{
		i = 0;
		if (n < 0)
			nbr[i++] = '-';
		while (i < size && (base = base / 10))
		{
			nbr[i++] = '0' + (n / base);
			n %= base;
		}
		nbr[i] = 0;
	}
	return (nbr);
}
