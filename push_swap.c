/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:02:54 by danielji          #+#    #+#             */
/*   Updated: 2025/05/21 13:31:51 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	print_list(t_list *lst)
{
	int	*num;

	while (lst)
	{
		num = (int *)lst->content;
		ft_printf("%d\n", *num);
		lst = lst->next;
	}
}

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

int	main(int argc, char **argv)
{
	t_list	*a_stack;
	t_list	*b_stack;

	if (argc == 1)
		return (0);
	if (argc == 2 && ft_strchr(argv[1], ' '))
		argv = ft_split(argv[1], ' ');
	else
		argv = argv + 1;
	validate(argv);
	a_stack = initialize(argv);
	b_stack = NULL;
	print_list(a_stack);
	ft_lstclear(&a_stack, free);
	return (0);
}
