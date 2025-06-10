/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:01:44 by danielji          #+#    #+#             */
/*   Updated: 2025/06/10 23:04:59 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Returns 1 if the stack is sorted in ascending order (1, 2, 3)
int	is_sorted(t_stack *node)
{
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

// Returns 1 if the stack is sorted in descending order (3, 2, 1)
int	is_revsorted(t_stack *node)
{
	while (node && node->next)
	{
		if (node->value < node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

// Returns a pointer to the node with the smallest number.
t_stack	*get_smallest(t_stack *a)
{
	t_stack	*current;
	t_stack	*smallest;

	current = a;
	smallest = NULL;
	while (current)
	{
		if (!smallest || current->value < smallest->value)
			smallest = current;
		current = current->next;
	}
	return (smallest);
}
