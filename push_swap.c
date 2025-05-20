/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/05/20 12:56:51 by danielji         ###   ########.fr       */
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
		ft_printf("%s\n", (char *)lst->content);
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
		// If you need to modify the content or free it, you should allocate
		// and copy each string. Otherwise, this shallow copy is perfectly
		// fine for read-only iteration or processing.
		arr = argv + 1;
	}
	return (arr);
}

t_list*	initialize(char **arr)
{
	t_list	*a;
	t_list	*node;
	int		i;
	int		*num_ptr;

	a = NULL;
	i = 0;
	while (arr[i])
	{
		// *num_ptr = ft_atoi(arr[i]);
		// ft_printf("%i: %s = %i\n", i, arr[i], num_ptr);
		// node = ft_lstnew(num_ptr);
		node = ft_lstnew(arr[i]);
		i++;
		ft_lstadd_back(&a, node);
	}
	return (a);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	char	**args;

	if (argc == 1)
		return (0);
	args = split_arguments(argc, argv);
	a = initialize(args);
	b = NULL;
	print_list(a);
	//ft_lstclear(&a, free);
	return (0);
}