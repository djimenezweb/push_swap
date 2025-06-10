/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:39:16 by danielji          #+#    #+#             */
/*   Updated: 2025/06/11 01:24:15 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstack.h"

/* Allocates memory and returns a new node.
- `value` is initialized with the given parameter `value`.
- `index` is initialized to `-1`. 
- `next` is initialized to `NULL`. */
t_stack	*ft_stacknew(int value)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}
