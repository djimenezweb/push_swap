/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:02:56 by danielji          #+#    #+#             */
/*   Updated: 2025/06/10 23:11:10 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_sort(t_stack **a, t_stack **b)
{
	pb(a, b);
	pb(a, b);
	sa(a, b);
	rrr(a, b);
	pa(a, b);
	pa(a, b);
	ra(a, b);
	ra(a, b);
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
	int		size;

	size = ft_stacksize(*a);
	if (is_revsorted(*a) && size == 5)
	{
		rev_sort(a, b);
		return ;
	}
	while (size > 3)
	{
		smallest = get_smallest(*a);
		while ((*a)->value != smallest->value)
			ra(a, b);
		pb(a, b);
		size--;
	}
	if (!is_sorted(*a))
		sort_three(a, b);
	while (ft_stacksize(*b) > 0)
	{
		pa(a, b);
	}
}
