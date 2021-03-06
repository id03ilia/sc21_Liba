/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:12:58 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/22 17:13:01 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_sifr(char *viv, int k, int m)
{
	unsigned long long	res;
	unsigned long long	c;

	c = 1;
	res = 0;
	while (k > 0)
	{
		res = res + (viv[k - 1] - 48) * c;
		c = c * 10;
		k--;
	}
	if ((res > 9223372036854775807) && (m == 1))
		return (-1);
	if (res > 9223372036854775807 && (m == -1))
		return (0);
	return (res);
}

int	ft_atoi(const char *str)
{
	int		m;
	int		s;
	char	cifr[27];

	m = 1;
	s = 0;
	while (((*str > 8) && (*str < 14)) || (*str == 32))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			m = m * -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		cifr[s] = *str;
		str++;
		s++;
	}
	return ((ft_atoi_sifr(cifr, s, m) * m));
}
