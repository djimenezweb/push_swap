/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:07:50 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 22:21:03 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Initialize a stack with integers from an array of strings.
t_stack	*initialize(char **arr, int needs_free)
{
	t_stack			*list;
	t_stack			*node;
	unsigned int	i;
	int				num;

	list = NULL;
	i = 0;
	while (arr[i])
	{
		num = ft_atoi(arr[i]);
		if (needs_free)
			free(arr[i]);
		node = ft_stacknew(num, i);
		ft_stackadd_back(&list, node);
		i++;
	}
	if (needs_free)
		free(arr);
	return (list);
}

// Split arguments
char	**split_args(char **argv, int *needs_free)
{
	if (ft_strchr(argv[1], ' '))
	{
		argv = ft_split(argv[1], ' ');
		*needs_free = 1;
	}
	else
		argv = argv + 1;
	return (argv);
}

// Print list (for testing purposes only!!)
void	print_list(char *title, t_stack *lst)
{
	ft_printf("%s", title);
	while (lst)
	{
		ft_printf("[%d: %d] ", lst->index, lst->content);
		lst = lst->next;
	}
	ft_printf("\n");
}

// Iterates over a list and returns 1 if it's ordered, otherwise returns 0.
int	is_sorted(t_stack *node)
{
	while (node && node->next)
	{
		if (node->content > node->next->content)
			return (0);
		node = node->next;
	}
	return (1);
}
