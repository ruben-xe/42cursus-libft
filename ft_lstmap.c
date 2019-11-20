/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:34:01 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/20 15:45:25 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*lstmap;

	if (lst && f)
	{
		if ((lstmap = ft_lstnew(f(lst->content))))
		{
			element = lstmap;
			while (lstmap && (lst = lst->next))
			{
				if ((lstmap->next = ft_lstnew(f(lst->content))))
					lstmap = lstmap->next;
				else
				{
					ft_lstclear(&element, del);
					return (NULL);
				}
			}
			return (element);
		}
	}
	return (NULL);
}
