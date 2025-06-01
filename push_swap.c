/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/06/02 00:02:10 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Minimal validation (80): 100 random numbers in fewer than 700 operations.
// Maximum validation: 500 random numbers in no more than 5500 operations.
// ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG | wc -l
int	main(int argc, char **argv)
{
	t_list	*a_stack;
	t_list	*b_stack;
	int		needs_free;
	int		size;

	needs_free = 0;
	if (argc == 1)
		return (0);
	argv = split_args(argv, &needs_free);
	validate(argv);
	a_stack = initialize(argv, needs_free);
	b_stack = NULL;
	size = ft_lstsize(a_stack);
	while (!is_sorted(a_stack))
	{
		if (size == 2)
			sa(&a_stack, &b_stack);
		else if (size <= 5)
			basic_sort(&a_stack, &b_stack);
		else
			ineffsort(&a_stack, &b_stack);
	}
	ft_lstclear(&a_stack, free);
	ft_lstclear(&b_stack, free);
	return (0);
}
