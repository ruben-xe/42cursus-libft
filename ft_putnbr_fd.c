/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 15:39:12 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/18 15:42:45 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	base;
	int		size;
	char	d;

	base = n < 0 ? -1 : 1;
	size = 1;
	while ((base = base * 10) && n / base > 0)
		size++;
	size = base < 0 ? size + 1 : size;
	if (n < 0)
		write(fd, "-", 1);
	while ((base = base / 10))
	{
		d = '0' + (n / base);
		write(fd, &d, 1);
		n %= base;
	}
}
