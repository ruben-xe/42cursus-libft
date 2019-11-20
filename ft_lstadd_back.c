/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:12:54 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/18 19:12:50 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst)
	{
		if (*alst)
		{
			while ((*alst)->next != NULL)
				(*alst) = (*alst)->next;
			(*alst)->next = new;
		}
		else
			*alst = new;
	}
}
