/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:23:27 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/23 11:23:31 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	mem = ((void *)malloc(size * num));
	if (mem == 0)
		return (0);
	ft_memset(mem, '\0', num * size);
	return (mem);
}
