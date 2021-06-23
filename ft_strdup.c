/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:21:38 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/23 12:21:40 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	l;
	size_t	i;
	char	*mem;

	i = 0;
	l = ft_strlen(src);
	mem = ((char *)malloc(l + 1));
	if (mem == 0)
		return (0);
	while (src[i] != '\0' )
	{
		mem[i] = src[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
