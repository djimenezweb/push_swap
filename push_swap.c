/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/06/10 23:32:35 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	printlist(t_stack *list)
{
	t_stack	*current;

	current = list;
	while (current)
	{
		ft_printf("[%d: %d] ", current->index, current->value);
		current = current->next;
	}
}

// ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG | wc -l
// ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG | ./checker_linux $ARG
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*smallest;
	int		size;

	if (argc == 1)
		return (0);
	a = NULL;
	b = NULL;
	initialize(&a, argc, argv);
	size = ft_stacksize(a);
	/*
	if (!is_sorted(a))
	{
		if (size == 2)
			sa(&a, &b);
		else if (size <= 5)
			basic_sort(&a, &b);
		else
			radix_sort(&a, &b);
	}
	*/
	smallest = get_smallest(a);
	ft_printf("Size: %d, Smallest: %d\n", size, smallest->value);
	printlist(a);
	ft_stackclear(&a, free);
	ft_stackclear(&b, free);
	return (0);
}
