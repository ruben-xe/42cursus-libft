/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntoaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 13:17:50 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/21 13:19:59 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ntoaddr(unsigned long n)
{
	long long	base;
	size_t		len;
	char		*addr;
	size_t		i;

	base = 1;
	len = 1;
	while ((base = base * 16) && n / base > 0)
		len++;
	if ((addr = (char *)malloc((2 + len + 1) * sizeof(char))))
	{
		addr[0] = '0';
		addr[1] = 'x';
		i = 2;
		while (i < len + 2 && (base = base / 16))
		{
			if (n / base < 10)
				addr[i++] = '0' + (n / base);
			else
				addr[i++] = 'a' + (n / base) - 10;
			n %= base;
		}
		addr[i] = 0;
	}
	return (addr);
}
