/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:02:56 by danielji          #+#    #+#             */
/*   Updated: 2025/05/30 11:05:34 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Sort five numbers in ascending order.
void	sort_five(t_list **a, t_list **b)
{
	t_list	*temp;
	t_list	*smallest;
	//t_list	*second_smallest;

	temp = *a;
	(void)b;
	while (temp)
	{
		if (get_content(temp) < get_content(smallest))
			smallest = temp;
		temp = temp->next;
	}
	ft_printf("%i", get_content(smallest));
}
