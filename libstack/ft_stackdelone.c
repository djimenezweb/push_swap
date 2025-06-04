/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:27:53 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 09:52:27 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libstack.h"

/* Takes a node as parameter and frees its content using the function `del`.
Free the node itself but does NOT free the next node. */
void	ft_stackdelone(t_stack *lst, void (*del)(void *))
{
	del(lst->content);
	del(lst->key);
	free(lst);
}
