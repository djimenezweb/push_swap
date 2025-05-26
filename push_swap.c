/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/05/26 20:39:17 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Print list (for testing purposes only!!)
void	print_list(char *title, t_list *lst)
{
	int	*num;

	ft_printf("%s", title);
	while (lst)
	{
		num = (int *)lst->content;
		ft_printf("%d ", *num);
		lst = lst->next;
	}
	ft_printf("\n");
}

// Iterates over a stack and returns 1 if it's ordered, otherwise returns 0.
int	is_sorted(t_list *stack)
{
	while (stack && stack->next)
	{
		if (*(int *)stack->content > *(int *)stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

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

void	free_array_of_strings(char **arr)
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

void	sort_three(t_list **a, t_list **b)
{
	int	x;
	int	y;
	int	z;

	x = *((int *)(*a)->content);
	y = *((int *)(*a)->next->content);
	z = *((int *)(*a)->next->next->content);
	if ((x < y) && (y > z) && (z < x)) // 231
		rra(a, b);
	else if ((x > y) && (y < z) && (z < x)) // 312
		ra(a, b);
	else
	{
		sa(a, b); //213
		if ((x < y) && (x < z)) // 132
			ra(a, b);
		if ((x > y) && (x > z)) // 321
			rra(a, b);
	}
}

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
	
	ft_printf("Is sorted? %i\n", is_sorted(a_stack));

	print_list("Original -> ", a_stack);
	if (!is_sorted(a_stack) && size == 2)
		sa(&a_stack, &b_stack);

	if (!is_sorted(a_stack) && size == 3)
		sort_three(&a_stack, &b_stack);
	print_list("Sorted ---> ", a_stack);
	ft_printf("Is sorted? %i\n", is_sorted(a_stack));
	ft_printf("\n");
	/* print_list("Original:", a_stack);
	ft_swap(&a_stack);
	print_list("Swap:", a_stack);
	ft_push(&a_stack, &b_stack);
	print_list("Push (a):", a_stack);
	print_list("Push (b):", b_stack);
	ft_rrotate(&a_stack);
	print_list("Rotate (a):", a_stack); */
	ft_lstclear(&a_stack, free);
	ft_lstclear(&b_stack, free);
	return (0);
}
