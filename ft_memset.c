/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:20:44 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/19 16:23:35 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;
	int				i;

	mem = b;
	i = -1;
	while (++i < (int)len)
		mem[i] = c;
	return (b);
}
