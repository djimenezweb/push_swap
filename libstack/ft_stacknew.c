/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:39:16 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 12:22:29 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libstack.h"

/* Allocates memory and returns a new node.
The `content` variable is initialized with the given parameter `content`.
The variable `next` is initialized to `NULL`. */
t_stack	*ft_stacknew(int *content, unsigned int *index)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->content = content;
	node->index = index;
	node->next = NULL;
	return (node);
}
