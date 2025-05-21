/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:30:20 by danielji          #+#    #+#             */
/*   Updated: 2025/05/21 16:26:33 by danielji         ###   ########.fr       */
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

// Take the first element at the top of SRC and put it at the top of DST.
// Do nothing if SRC is empty.
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
	t_list	*current;

	if (!stack || !*stack || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	current = *stack;
	while (current->next->next)
	{
		current = current->next;
	}

	current->next->next = second;
	first->next = NULL;
	*stack = current->next;
}
