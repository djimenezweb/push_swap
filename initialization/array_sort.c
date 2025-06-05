/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:44:36 by danielji          #+#    #+#             */
/*   Updated: 2025/06/05 11:52:48 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

unsigned int	get_index(int *sorted_array, int size, int value)
{
	int	low;
	int	mid;
	int	high;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (sorted_array[mid] == value)
			return ((unsigned int)mid);
		else if (sorted_array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

void	assign_index(t_stack *lst, int size, int *arr)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst->index = get_index(arr, size, lst->value);
		i++;
		lst = lst->next;
	}
}

void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}
