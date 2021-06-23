/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:20:40 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/22 09:20:44 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	k;
	size_t	j;
	size_t	w;

	i = 0;
	k = 0;
	w = ft_strlen(s);
	while (i < w + 1)
	{
		if (s[i] == (unsigned char)c)
			k = i + 1;
		i++;
	}
	j = 0;
	while (j <= i && k > 0)
	{
		if (j == k - 1)
			return ((char *)s + k - 1);
		j++;
	}	
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
