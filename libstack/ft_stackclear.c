/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:29:41 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 09:50:06 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libstack.h"

/* Deletes and frees the given node and all its successors, using the
function `del` and `free(3)`. Finally, set the pointer to the list to `NULL`.*/
void	ft_stackclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*current;
	t_stack	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_stackdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
