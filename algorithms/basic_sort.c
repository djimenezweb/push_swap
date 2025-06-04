/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:02:56 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 22:43:29 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Returns a pointer to the node with the smallest number.
t_stack	*get_smallest(t_stack **a)
{
	t_stack	*current;
	t_stack	*smallest;

	current = *a;
	smallest = NULL;
	while (current)
	{
		if (!smallest || current->value < smallest->value)
			smallest = current;
		current = current->next;
	}
	return (smallest);
}

// Sort three numbers in ascending order.
void	sort_three(t_stack **a, t_stack **b)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->value;
	y = (*a)->next->value;
	z = (*a)->next->next->value;
	if ((x < y) && (y > z) && (z < x))
		rra(a, b);
	else if ((x > y) && (y < z) && (z < x))
		ra(a, b);
	else
	{
		sa(a, b);
		if ((x < y) && (x < z))
			ra(a, b);
		if ((x > y) && (x > z))
			rra(a, b);
	}
}

// Sort four or five numbers in ascending order.
void	basic_sort(t_stack **a, t_stack **b)
{
	t_stack	*smallest;

	while (ft_stacksize(*a) > 3)
	{
		smallest = get_smallest(a);
		while ((*a)->value != smallest->value)
			ra(a, b);
		pb(a, b);
	}
	if (!is_sorted(*a))
		sort_three(a, b);
	while (ft_stacksize(*b) > 0)
	{
		pa(a, b);
	}
}
