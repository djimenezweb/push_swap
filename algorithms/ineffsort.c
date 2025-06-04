/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ineffsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:07:04 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 10:26:37 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Sort numbers by pushing the smallest in `a` to `b`.
void	ineffsort(t_stack **a, t_stack **b)
{
	int	smallest;

	while (*a)
	{
		smallest = get_content(get_smallest(a));
		while (get_content(*a) != smallest)
		{
			ra(a, b);
		}
		pb(a, b);
	}
	while (*b)
	{
		pa(a, b);
	}
}
