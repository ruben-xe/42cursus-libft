/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:12:54 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/25 16:28:27 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	if (alst && new)
	{
		if (*alst)
		{
			lst = *alst;
			while (lst->next)
				lst = lst->next;
			lst->next = new;
		}
		else
			*alst = new;
	}
}
