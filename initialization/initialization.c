/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:27:10 by danielji          #+#    #+#             */
/*   Updated: 2025/06/10 21:25:06 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Iterates through an array of strings, frees each string and the array.
void	free_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

// Frees array and list, prints error message and exits.
void	free_and_error(char **arr, t_stack **stack)
{
	free_array(arr);
	ft_stackclear(stack, free);
	ft_putstr_fd("Error\n", 2);
	exit(2);
}

/* Initializes stack:
- Splits program arguments
- Checks if argument is not an integer
- Checks if argument exceeds `INT_MIN` and `INT_MAX`
- Creates new node and adds it to the list */
// TO DO: CHECK FOR DUPLICATES; ASSIGN INDICES
void	initialize(t_stack **a, int argc, char **argv)
{
	t_stack	*node;
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
				return (free_and_error(arguments, a));
			value = ft_atol(arguments[j]);
			if ((value < INT_MIN || value > INT_MAX))
				return (free_and_error(arguments, a));
			node = ft_stacknew((int)value);
			ft_stackadd_back(a, node);
			j++;
		}
		i++;
		free_array(arguments);
	}
}
