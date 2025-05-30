/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:02:56 by danielji          #+#    #+#             */
/*   Updated: 2025/05/30 14:36:41 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Get smallest node.
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
