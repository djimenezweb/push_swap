/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:39:16 by danielji          #+#    #+#             */
/*   Updated: 2025/06/10 23:43:21 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libstack.h"

/* Allocates memory and returns a new node.
The `value` variable is initialized with the given parameter `value`.
The variable `next` is initialized to `NULL`. */
t_stack	*ft_stacknew(int value)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = UINT_MAX;
	node->next = NULL;
	return (node);
}
