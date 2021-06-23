/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:37:12 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/20 18:37:16 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*p_arr1;
	unsigned char	*p_arr2;
	size_t			i;

	p_arr1 = (unsigned char *)arr1;
	p_arr2 = (unsigned char *)arr2;
	i = 0;
	while (i < n)
	{
		if (*(p_arr1 + i) != *(p_arr2 + i))
			return (*(p_arr1 + i) - *(p_arr2 + i));
		i++;
	}
	return (0);
}
