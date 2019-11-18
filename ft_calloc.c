/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:28:26 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/18 17:38:23 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	int		i;

	mem = NULL;
	if ((mem = malloc(count * size)))
	{
		i = -1;
		while (mem && count * size > 0 && ++i >= 0 &&
				(unsigned int)i < count * size)
			mem[i] = 0;
	}
	return ((void *)mem);
}
