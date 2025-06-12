/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:27:10 by danielji          #+#    #+#             */
/*   Updated: 2025/06/11 01:24:33 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Returns a pointer to the node with the smallest value
// that doesn't hold an index yet.
t_stack	*get_unindexed_smallest(t_stack *a)
{
	t_stack	*current;
	t_stack	*smallest;

	current = a;
	smallest = NULL;
	while (current)
	{
		if (current->index == -1)
		{
			if (!smallest || current->value < smallest->value)
				smallest = current;
		}
		current = current->next;
	}
	return (smallest);
}

// Assigns an index to a number that represents its position in a sorted list.
void	assign_index(t_stack *a)
{
	unsigned int	i;
	t_stack			*smallest;

	i = 0;
	while (1)
	{
		smallest = get_unindexed_smallest(a);
		if (!smallest)
			return ;
		smallest->index = i;
		i++;
	}
}

/* Initializes and validates stack:
- Splits program arguments
- Checks if argument is not an integer
- Checks if argument exceeds `INT_MIN` and `INT_MAX`
- Creates new node and adds it to the list
- Checks for repeated numbers */
void	initialize(t_stack **a, int argc, char **argv)
{
	int		i;
	int		j;
	long	value;
	char	**arguments;

	i = 1;
	while (i < argc)
	{
		arguments = ft_split(argv[i], ' ');
		j = 0;
		while (arguments[j])
		{
			if (!ft_isvalidnumber(arguments[j]))
				return (free_and_exit(arguments, a));
			value = ft_atol(arguments[j]);
			if ((value < INT_MIN || value > INT_MAX))
				return (free_and_exit(arguments, a));
			ft_stackadd_back(a, ft_stacknew((int)value));
			j++;
		}
		i++;
		free_array(arguments);
	}
	are_repeated(a);
}
