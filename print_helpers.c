/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 10:08:25 by danielji          #+#    #+#             */
/*   Updated: 2025/06/05 10:09:50 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Prints index and value of each node in a list
void	print_list(char *title, t_stack *lst)
{
	ft_printf("%s", title);
	while (lst)
	{
		ft_printf("[%d: %d] ", lst->index, lst->value);
		lst = lst->next;
	}
	ft_printf("\n");
}

// Prints array of numbers
void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	ft_printf("Array: ");
	while (i < size)
	{
		ft_printf("%i, ", arr[i]);
		i++;
	}
	ft_printf("\n");
}
