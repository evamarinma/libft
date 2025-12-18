/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:06:55 by emarin-m          #+#    #+#             */
/*   Updated: 2025/10/17 15:06:57 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	Deletes and frees the given 'lst' node and the nodes next to it, using 'del' function. The list pointer must
	be NULL after execution.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
