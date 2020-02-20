/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 19:11:14 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/17 19:56:17 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees the given element and every successor of that element,
** using the function ’del’ and 'free'. Finally, the pointer to the list
** must be set to NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	node = *lst;
	if (lst)
	{
		while (node)
		{
			ft_lstdelone(node, del);
			node = node->next;
		}
		*lst = NULL;
	}
}
