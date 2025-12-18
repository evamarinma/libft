/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:59:33 by emarin-m          #+#    #+#             */
/*   Updated: 2025/10/21 14:59:35 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	Iters through the given 'lst' list and applies 'f' function to each node's content, creating a new list
	with the result of said iteration. 'del' function is applied to delete a node if needed.
*/

static t_list	*free_lst(t_list **new_lst, void (*del)(void *),
	void *new_content)
{
	if (new_content)
		del(new_content);
	ft_lstclear(new_lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_element;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (free_lst(&new_lst, del, NULL));
		new_element = ft_lstnew(new_content);
		if (!new_element)
			return (free_lst(&new_lst, del, new_content));
		ft_lstadd_back(&new_lst, new_element);
		lst = lst->next;
	}
	return (new_lst);
}
