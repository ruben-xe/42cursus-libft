/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:28:26 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/20 12:09:55 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	int				i;

	mem = NULL;
	if ((mem = (unsigned char *)malloc(count * size)))
	{
		i = -1;
		while (++i < (int)(count * size))
			mem[i] = 0;
	}
	return ((void *)mem);
}
