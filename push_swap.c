/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/05/30 13:54:26 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Initialize a stack with integers from an array of strings.
t_list	*initialize(char **arr)
{
	t_list	*list;
	t_list	*node;
	int		i;
	int		*num_ptr;

	list = NULL;
	i = 0;
	while (arr[i])
	{
		num_ptr = malloc(sizeof(int));
		if (!num_ptr)
			return (NULL);
		*num_ptr = ft_atoi(arr[i]);
		node = ft_lstnew(num_ptr);
		i++;
		ft_lstadd_back(&list, node);
	}
	return (list);
}

// This is where all the magic happens.
int	main(int argc, char **argv)
{
	t_list	*a_stack;
	t_list	*b_stack;
	int		needs_free;
	int		size;

	needs_free = 0;
	if (argc == 1)
		return (0);
	if (argc == 2 && ft_strchr(argv[1], ' '))
	{
		argv = ft_split(argv[1], ' ');
		needs_free = 1;
	}
	else
		argv = argv + 1;
	validate(argv);
	a_stack = initialize(argv);
	b_stack = NULL;
	size = ft_lstsize(a_stack);
	if (needs_free)
		free_array_of_strings(argv);
	
	//print_list("Original -> ", a_stack);
	/*	if (size <= 5)
		sort_five(&a_stack, &b_stack); */
	while (!is_sorted(a_stack))
	{
		if (size == 2)
			sa(&a_stack, &b_stack);
		else if (size == 3)
			sort_three(&a_stack, &b_stack);
		else if (size == 4)
			sort_four(&a_stack, &b_stack);
		else if (size == 5)
			sort_five(&a_stack, &b_stack);
	}
	print_list("Sorted ---> ", a_stack);
	ft_lstclear(&a_stack, free);
	ft_lstclear(&b_stack, free);
	return (0);
}
