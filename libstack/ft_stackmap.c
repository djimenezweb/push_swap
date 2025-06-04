/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:32:36 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 12:22:29 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libstack.h"

/* Iterates through the list `lst`, applies the function `f` to each node's
content, and creates a new list resulting of the successive applications of
the function `f`.
The `del` function is used to delete the content of a node if needed.*/
t_stack	*ft_stackmap(t_stack *lst, void *(*f)(void *), void (*del)(void *))
{
	t_stack			*new_list;
	t_stack			*new_node;
	int				*new_content;
	unsigned int	*new_index;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_index = lst->index;
		new_node = ft_stacknew(new_content, new_index);
		if (!new_node)
		{
			del(new_content);
			ft_stackclear(&new_list, del);
			return (NULL);
		}
		ft_stackadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
