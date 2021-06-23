/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:19:13 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/26 11:19:17 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mem;
	size_t	i;

	if (s == NULL)
		return (NULL);
	mem = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mem)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mem[i] = (*f)(i, s[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
