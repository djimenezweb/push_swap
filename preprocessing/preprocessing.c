/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocessing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:18:31 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 21:53:00 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

void print_array(int *arr, int size)
{
	int i = 0;
	ft_printf("Array: ");
	while (i < size)
	{
		ft_printf("%i, ", arr[i]);
		i++;
	}
	ft_printf("\n");
}

void sort_array(int *arr, int size)
{
	int i;
	int j;
	int	temp;

	i = 0;
	while(i < size)
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

unsigned int get_index_from_sorted_array(int *sorted_array, int size, int value) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (sorted_array[mid] == value)
            return (unsigned int)mid;
        else if (sorted_array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void	assign_index(t_stack *lst, int size, int *arr)
{
	unsigned int i;

	i = 0;
	(void)arr;
	while (lst)
	{
		//*(lst->index) = (unsigned int)arr[i];
		lst->index = get_index_from_sorted_array(arr, size, lst->content);
		i++;
		lst = lst->next;
	}
}

int *create_array_from_list(t_stack *lst, int size)
{
	int i;
	int	*arr;

	i = 0;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while(lst)
	{
		arr[i] = lst->content;
		i++;
		lst = lst->next;
	}
	return (arr);
}