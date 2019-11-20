/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:23:45 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/19 12:05:24 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;

	if (lst && del)
	{
		while (*lst)
		{
			element = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			(*lst) = element;
		}
	}
}
