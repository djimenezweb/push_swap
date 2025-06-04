/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:53:03 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 10:26:37 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Shift down all elements of stack a by 1.
// The last element becomes the first one.
void	ft_rrotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*prev_last;
	t_stack	*last;

	if (!stack || !*stack || (*stack)->next == NULL)
		return ;
	first = *stack;
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

// The first element of stack `a` becomes the last one.
void	rra(t_stack **a, t_stack **b)
{
	(void)b;
	ft_rrotate(a);
	ft_printf("rra\n");
}

// The first element of stack `b` becomes the last one.
void	rrb(t_stack **a, t_stack **b)
{
	(void)a;
	ft_rrotate(b);
	ft_printf("rrb\n");
}

// `rra` and `rrb` at the same time.
void	rrr(t_stack **a, t_stack **b)
{
	ft_rrotate(a);
	ft_rrotate(b);
	ft_printf("rrr\n");
}
