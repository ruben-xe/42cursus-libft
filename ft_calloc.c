/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:28:26 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 15:52:58 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_setzero(void *s, size_t n)
{
	char			*mem;
	unsigned int	i;

	mem = s;
	i = -1;
	while (mem && n > 0 && ++i >= 0 && i < n)
		mem[i] = 0;
}

void		*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if ((mem = (void *)malloc(count * size)))
	{
		ft_setzero(mem, count * size);
		return (mem);
	}
	return (NULL);
}
