/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/05/20 15:49:46 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft/libft.h"

void	error(void)
{
	ft_printf("Error\n");
	exit(2);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		int *num = (int *)lst->content;
		ft_printf("%d\n", *num);
		lst = lst->next;
	}
}

char	**split_arguments(int argc, char *argv[])
{
	char	**arr;
	int		i;

	i = 0;
	if (argc == 2 && ft_strchr(argv[1], ' '))
	{
		arr = ft_split(argv[1], ' ');
	}
	else
	{
		// Warning: arr is not a deep copy, just a shifted pointer.
		// If you need to modify the content or free it, you should
		// allocate and copy each string. Otherwise, this shallow copy
		// is perfectly fine for read-only iteration or processing.
		arr = argv + 1;
	}
	return (arr);
}

t_list*	initialize(char **arr)
{
	t_list	*list;
	t_list	*node;
	int		i;

	list = NULL;
	i = 0;
	while (arr[i])
	{
		int *num_ptr = malloc(sizeof(int));
		if (!num_ptr)
			return (NULL);
		*num_ptr = ft_atoi(arr[i]);
		node = ft_lstnew(num_ptr);
		i++;
		ft_lstadd_back(&list, node);
	}
	return (list);
}

int	main(int argc, char *argv[])
{
	t_list	*a_stack;
	t_list	*b_stack;
	char	**args;

	if (argc == 1)
		return (0);
	args = split_arguments(argc, argv);
	a_stack = initialize(args);
	b_stack = NULL;
	print_list(a_stack);
	//ft_lstclear(&a_stack, free);
	return (0);
}