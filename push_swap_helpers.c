/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:07:50 by danielji          #+#    #+#             */
/*   Updated: 2025/05/27 10:15:18 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Get content of node, parse it as integer an return it.
int	get_content(t_list *node)
{
	return (*((int *)node->content));
}

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

// Iterates over a list and returns 1 if it's ordered, otherwise returns 0.
int	is_sorted(t_list *node)
{
	while (node && node->next)
	{
		if (get_content(node) > get_content(node->next))
			return (0);
		node = node->next;
	}
	return (1);
}

// Frees every string in an array and the array itself.
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
