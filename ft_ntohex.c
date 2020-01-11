/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:24:38 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/18 10:25:52 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ntohex(unsigned long n)
{
	long long	base;
	size_t		len;
	char		*hex;
	size_t		i;

	base = 1;
	len = 1;
	hex = NULL;
	while ((base = base * 16) && n / base > 0)
		len++;
	if ((hex = (char *)malloc((len + 1) * sizeof(char))))
	{
		i = 0;
		while (i < len && (base = base / 16))
		{
			if (n / base < 10)
				hex[i++] = '0' + (n / base);
			else
				hex[i++] = 'a' + (n / base) - 10;
			n %= base;
		}
		hex[i] = 0;
	}
	return (hex);
}
