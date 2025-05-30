/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:02:32 by danielji          #+#    #+#             */
/*   Updated: 2025/05/30 13:11:25 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

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