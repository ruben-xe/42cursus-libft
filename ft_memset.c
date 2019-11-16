/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:20:44 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 17:27:19 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*mem;

	i = -1;
	mem = (char *)b;
	while (len > 0 && ++i >= 0 && (unsigned int)i < len)
		mem[i] = c;
	return (b);
}
