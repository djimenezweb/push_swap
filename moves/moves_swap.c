/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:42:01 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 10:26:37 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Swap the first 2 elements at the top of the stack.
// Do nothing if there is only one element or none.
void	ft_swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

// Swap the first 2 elements at the top of stack `a`
void	sa(t_stack **a, t_stack **b)
{
	(void)b;
	ft_swap(a);
	ft_printf("sa\n");
}

// Swap the first 2 elements at the top of stack `b`
void	sb(t_stack **a, t_stack **b)
{
	(void)a;
	ft_swap(b);
	ft_printf("sb\n");
}

// `sa` and `sb` at the same time
void	ss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}
