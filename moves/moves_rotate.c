/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:53:03 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 10:26:37 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Shift up all elements of the stack by 1.
// The first element becomes the last one.
void	ft_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*last;

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

// The first element of stack `a` becomes the last one.
void	ra(t_stack **a, t_stack **b)
{
	(void)b;
	ft_rotate(a);
	ft_printf("ra\n");
}

// The first element of stack `b` becomes the last one.
void	rb(t_stack **a, t_stack **b)
{
	(void)a;
	ft_rotate(b);
	ft_printf("rb\n");
}

// `ra` and `rb` at the same time.
void	rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}
