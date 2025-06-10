/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization_original.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:27:10 by danielji          #+#    #+#             */
/*   Updated: 2025/06/10 21:09:42 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Assigns an index to a number that represents its position in a sorted list.
void	assign_index(t_stack *lst, int size, int *arr)
{
	while (lst)
	{
		lst->index = (unsigned int)get_index(arr, size, lst->value);
		lst = lst->next;
	}
}

// Takes an array of strings and returns an array of integers.
int	*strarr_to_numarr(char **str_arr, int needs_free)
{
	int	i;
	int	*num_arr;

	i = 0;
	while (str_arr[i])
		i++;
	num_arr = malloc(sizeof(int) * i);
	if (!num_arr)
		return (NULL);
	i = 0;
	while (str_arr[i])
	{
		num_arr[i] = ft_atoi(str_arr[i]);
		if (needs_free)
			free(str_arr[i]);
		i++;
	}
	if (needs_free)
		free(str_arr);
	return (num_arr);
}

// Takes an array of integers and returns a list
// of nodes with that number as `value`.
t_stack	*numarr_to_list(int *arr, int size)
{
	t_stack			*list;
	t_stack			*node;
	unsigned int	i;

	list = NULL;
	i = 0;
	while (i < (unsigned int)size)
	{
		node = ft_stacknew(arr[i]);
		ft_stackadd_back(&list, node);
		i++;
	}
	return (list);
}

/* Initializes stack `a`:
- Splits program arguments (if needed)
- Validates arguments
- Creates an array of integers from the arguments
- Creates a stack from that array of integers
- Sorts array of integers
- Assigns index to each integer
- Returns size of stack */
int	initialize(t_stack **a, char *argv[])
{
	int	*num_arr;
	int	needs_free;
	int	size;

	needs_free = 0;
	if (ft_strchr(argv[1], ' '))
	{
		argv = ft_split(argv[1], ' ');
		needs_free = 1;
	}
	else
		argv = argv + 1;
	size = validate(argv);
	num_arr = strarr_to_numarr(argv, needs_free);
	*a = numarr_to_list(num_arr, size);
	bubble_sort(num_arr, size);
	assign_index(*a, size, num_arr);
	free(num_arr);
	return (size);
}
