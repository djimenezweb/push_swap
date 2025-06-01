/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:02:56 by danielji          #+#    #+#             */
/*   Updated: 2025/05/30 18:27:49 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Returns a pointer to the node with the smallest number.
t_list	*get_smallest(t_list **a)
{
	t_list	*temp;
	t_list	*smallest;

	temp = *a;
	smallest = NULL;
	while (temp)
	{
		if (!smallest || get_content(temp) < get_content(smallest))
			smallest = temp;
		temp = temp->next;
	}
	return (smallest);
}

// Sort three numbers in ascending order.
void	sort_three(t_list **a, t_list **b)
{
	int	x;
	int	y;
	int	z;

	x = get_content(*a);
	y = get_content((*a)->next);
	z = get_content((*a)->next->next);
	if ((x < y) && (y > z) && (z < x)) // 231
		rra(a, b);
	else if ((x > y) && (y < z) && (z < x)) // 312
		ra(a, b);
	else
	{
		sa(a, b); //213
		if ((x < y) && (x < z)) // 132
			ra(a, b);
		if ((x > y) && (x > z)) // 321
			rra(a, b);
	}
}

// Sort four or five numbers in ascending order.
void	sort_four_or_five(t_list **a, t_list **b, int size)
{
	t_list	*smallest;

	smallest = get_smallest(a);
	while (get_content(*a) != get_content(smallest))
		ra(a, b);
	pb(a, b);
	if (!is_sorted(*a) && size == 5)
		sort_four_or_five(a, b, 4);
	if (!is_sorted(*a) && size == 4)
		sort_three(a, b);
	pa(a, b);
}
