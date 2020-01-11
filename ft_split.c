/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:46:39 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/12/09 13:01:00 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_setstrs(char **strs, char const *s, char c, int n)
{
	int i;
	int j;
	int len;

	i = ft_strlen(s);
	while (--i > 0)
	{
		if (s[i] != c && (len = 1))
		{
			while (i > 0 && s[i - 1] != c && i--)
				len++;
			if ((strs[--n] = malloc((len + 1) * sizeof(char))))
			{
				j = -1;
				while (++j < len)
					strs[n][j] = s[i + j];
				strs[n][j] = 0;
			}
			else
			{
				free(strs);
				strs = NULL;
			}
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	char	**strs;

	i = ft_strlen(s);
	n = 0;
	strs = NULL;
	while (--i > 0)
		if (s[i] != c && s[i - 1] == c)
			n++;
	if (i >= 0 && s[i] != c)
		n++;
	if ((strs = (char **)malloc((n + 1) * sizeof(char *))))
	{
		ft_setstrs(strs, s, c, n);
		if (strs && (strs[n] = malloc(sizeof(char))))
			strs[n] = NULL;
	}
	return (strs);
}
