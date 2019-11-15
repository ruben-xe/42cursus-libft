/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:14:12 by rsoto-in          #+#    #+#             */
/*   Updated: 2019/11/15 18:11:57 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_nbrlen(const char *str)
{
	int len;

	len = 0;
	while (str && str[len] >= '0' && str[len] <= '9')
		len++;
	return (len);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		j;
	long	n;
	long	base;

	i = 0;
	n = 0;
	base = 1;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	if ((str[i] == '+' || str[i] == '-'))
		base = str[i++] == '-' ? -base : base;
	if (ft_nbrlen(&str[i]) > 0)
	{
		j = i - 1;
		while (++i >= 0 && str[i] >= '0' && str[i] <= '9')
			base *= 10;
		while (++j >= 0 && str[j] >= '0' && str[j] <= '9')
		{
			n += (str[j] - '0') * base;
			base /= 10;
		}
	}
	return (n);
}
