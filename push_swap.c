/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/06/11 01:08:53 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG | wc -l
// ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG | ./checker_linux $ARG
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	if (argc == 1)
		return (0);
	a = NULL;
	b = NULL;
	initialize(&a, argc, argv);
	assign_index(a);
	size = ft_stacksize(a);
	if (!is_sorted(a))
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
