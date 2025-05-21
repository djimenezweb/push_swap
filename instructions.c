/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:30:20 by danielji          #+#    #+#             */
/*   Updated: 2025/05/21 17:05:13 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Swap the first 2 elements at the top of the stack.
// Do nothing if there is only one element or none.
void	ft_swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !*stack || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

// Take the first element at the top of `src` and put it at the top of `dst`.
// Do nothing if `src` is empty.
void	ft_push(t_list **src_stack, t_list **dst_stack)
{
	t_list	*first;

	if (!src_stack || !*src_stack)
		return ;
	first = *src_stack;
	*src_stack = first->next;
	ft_lstadd_front(dst_stack, first);
}

// Shift up all elements of the stack by 1.
// The first element becomes the last one.
void	ft_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (!stack || !*stack || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	last = *stack;
	while (last->next)
	{
		last = last->next;
	}
	first->next = NULL;
	last->next = first;
	*stack = second;
}

// Shift down all elements of stack a by 1.
// The last element becomes the first one.
void	ft_rrotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*prev_last;
	t_list	*last;

	if (!stack || !*stack || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	last = *stack;
	while (last->next)
	{
		prev_last = last;
		last = last->next;
	}
	prev_last->next = NULL;
	last->next = first;
	*stack = last;
}

// Swaps first & last nodes
/* void	ft_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*prev_last;
	t_list	*last;

	if (!stack || !*stack || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	last = *stack;
	while (last->next)
	{
		prev_last = last;
		last = last->next;
	}

	// Edge case: only two nodes
	if (first->next == last) {
		ft_swap(stack);
		return;
	}

	// Second-to-last points to first
	prev_last->next = first;
	// Old head becomes new tail
	first->next = NULL;
	// Old tail becomes new head
	last->next = second;
	// Update head pointer
	*stack = last;
} */