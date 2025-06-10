/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:39:16 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 22:30:23 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	node->next = NULL;
	return (node);
}
