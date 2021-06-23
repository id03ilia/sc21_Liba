/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 11:39:24 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/25 11:39:26 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*mem;

	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	mem = ((char *)malloc(sizeof(char) * (i + j + 1)));
	if (!mem)
		return (NULL);
	while (k < (i + j))
	{
		if (k < i)
			mem[k] = s1[k];
		else
			mem[k] = s2[k - i];
		k++;
	}
	mem[k] = '\0';
	return (mem);
}
