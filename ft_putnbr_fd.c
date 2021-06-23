/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:03:46 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/23 15:03:48 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbrc(int b, int fd)
{
	char	cc[11];
	int		i;

	i = 0;
	if (b > 0)
	{
		while (b > 0)
		{
			cc[i] = 48 + b % 10;
			b = b / 10;
			i++;
		}
		while (i > 0)
		{
			write(fd, &(cc[i - 1]), 1);
			i--;
		}
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == -2147483648)
	{
		write(fd, "2147483648", 10);
	}
	if (n == 0)
		write(fd, "0", 1);
	ft_putnbrc(n, fd);
}
