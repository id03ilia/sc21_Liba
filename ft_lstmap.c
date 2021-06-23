/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:58:16 by dflorenc          #+#    #+#             */
/*   Updated: 2021/04/29 15:58:18 by dflorenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*start_new;

	if (!lst || !f)
		return (0);
	cpy = ft_lstnew(f(lst->content));
	if (!cpy)
		return (0);
	start_new = cpy;
	lst = lst->next;
	while (lst)
	{
		cpy->next = ft_lstnew(f(lst->content));
		if (!cpy->next)
		{
			ft_lstclear(&start_new, del);
			return (0);
		}
		cpy = cpy->next;
		lst = lst->next;
	}
	cpy->next = NULL;
	return (start_new);
}
