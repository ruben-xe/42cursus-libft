/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:28:26 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 12:33:56 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	mem = NULL;
	if ((mem = (unsigned char *)malloc(count * size)))
	{
		i = 0;
		while (i < (count * size))
		{
			mem[i] = 0;
			i++;
		}
	}
	return ((void *)mem);
}
