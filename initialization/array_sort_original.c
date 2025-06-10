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

// Searches for `value` in a sorted array and returns its
// index (binary search) or `-1` if none is found.
int	get_index(int *sorted_array, int size, int value)
{
	int	low;
	int	i;
	int	high;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		i = (low + high) / 2;
		if (sorted_array[i] == value)
			return (i);
		else if (sorted_array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}
	return (-1);
}

// Sorts an array of integers by comparing each integer with
// its adjacent and swapping them if needed (bubble sort).
void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
