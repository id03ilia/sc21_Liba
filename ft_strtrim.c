/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:56:51 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/25 12:56:53 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_trim_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	t;

	i = 0;
	j = 0;
	t = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				t++;
				break ;
			}
			j++;
		}
		if (t == i + 1)
			i++;
		else
			break ;
	}
	return (i);
}

static unsigned int	ft_trim_end(char const *s1, char const *set, size_t	start_i)
{
	size_t	j;
	size_t	t;
	size_t	ie;

	j = 0;
	ie = ft_strlen(s1);
	t = ie;
	while (ie > start_i && s1[ie - 1])
	{
		j = 0;
		while (set[j])
		{
			if (s1[ie] == set[j])
			{
				t--;
				break ;
			}
			j++;
		}		
		if (t == ie)
			ie--;
		else
			break ;
	}
	return (ie + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		ie;
	char	*mem;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	i = ft_trim_start(s1, set);
	ie = ft_trim_end(s1, set, i);
	mem = ((char *)malloc(sizeof(char) * ((ie - i) + 1)));
	if (!mem)
		return (NULL);
	while (i < ie)
	{
		mem[j] = s1[i];
		j++;
		i++;
	}
	mem[j] = 0;
	return (mem);
}
