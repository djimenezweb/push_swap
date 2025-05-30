/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:02:56 by danielji          #+#    #+#             */
/*   Updated: 2025/05/30 13:57:19 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

static void push_by_value(t_list **a, t_list **b, int value)
{
	while (get_content(*a) != value)
	{
		ra(a, b);
	}
	pb(a, b);
}

// Sort four numbers in ascending order.
void	sort_four(t_list **a, t_list **b)
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
	push_by_value(a, b, get_content(smallest));
	if (!is_sorted(*a))
		sort_three(a, b);
	pa(a, b);
}

// Sort five numbers in ascending order.
void	sort_five(t_list **a, t_list **b)
{
	int		value;
	t_list	*temp;
	t_list	*smallest;
	t_list	*second_smallest;

	temp = *a;
	smallest = NULL;
	second_smallest = NULL;
	while (temp)
	{
		value = get_content(temp);
		if (!smallest || value < get_content(smallest))
		{
			second_smallest = smallest;
			smallest = temp;
		}
		else if (!second_smallest || value < get_content(second_smallest))
			second_smallest = temp;
		temp = temp->next;
	}
	ft_printf("-> Smallest: %i, %i\n", get_content(smallest), get_content(second_smallest));
	push_by_value(a, b, get_content(smallest));
	push_by_value(a, b, get_content(second_smallest));
	if (!is_sorted(*a))
		sort_three(a, b);
	pa(a, b);
	pa(a, b);
}
