/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/06/05 10:57:02 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *node)
{
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

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

int	is_revsorted(t_stack *node)
{
	while (node && node->next)
	{
		if (node->value < node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

// Minimal validation (80): 100 random numbers in fewer than 700 operations.
// Maximum validation: 500 random numbers in no more than 5500 operations.
// ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG | wc -l
// ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG | ./checker_linux $ARG
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	if (argc == 1)
		return (0);
	size = initialize(&a, argv);
	b = NULL;
	if (is_revsorted(a) && size == 5)
		rev_sort(&a, &b);
	while (!is_sorted(a))
	{
		if (size == 2)
			sa(&a, &b);
		else if (size <= 5)
			basic_sort(&a, &b);
		else
			radix_sort(&a, &b);
	}
	ft_stackclear(&a, free);
	ft_stackclear(&b, free);
	return (0);
}
