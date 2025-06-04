/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 19:36:07 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Minimal validation (80): 100 random numbers in fewer than 700 operations.
// Maximum validation: 500 random numbers in no more than 5500 operations.
// ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG | wc -l
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		needs_free;
	int		size;
	int		*arr;

	needs_free = 0;
	if (argc == 1)
		return (0);
	argv = split_args(argv, &needs_free);
	validate(argv);
	a = initialize(argv, needs_free);
	b = NULL;
	size = ft_stacksize(a);
	arr = create_array_from_list(a, size);
	sort_array(arr, size);
	assign_index(a, size, arr);
	// print_array(arr, size);
	//print_list("Stack a: ", a);
	while (!is_sorted(a))
	{
		if (size == 2)
			sa(&a, &b);
		else if (size <= 5)
			basic_sort(&a, &b);
		else
			radix_sort(&a, &b);
			//ineffsort(&a, &b);
	}
	//print_list("Stack a: ", a);
	//print_list("Stack b: ", b);
	free(arr);
	ft_stackclear(&a, free);
	ft_stackclear(&b, free);
	return (0);
}
