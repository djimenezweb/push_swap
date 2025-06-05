/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:27:10 by danielji          #+#    #+#             */
/*   Updated: 2025/06/05 11:50:11 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*strarr_to_numarr(char **str_arr, int needs_free)
{
	int	i;
	int	*num_arr;

	i = 0;
	while (str_arr[i])
		i++;
	num_arr = malloc(sizeof(int) * i);
	if (!num_arr)
		return (NULL);
	i = 0;
	while (str_arr[i])
	{
		num_arr[i] = ft_atoi(str_arr[i]);
		if (needs_free)
			free(str_arr[i]);
		i++;
	}
	if (needs_free)
		free(str_arr);
	return (num_arr);
}

t_stack	*numarr_to_list(int *arr, int size)
{
	t_stack			*list;
	t_stack			*node;
	unsigned int	i;

	list = NULL;
	i = 0;
	while (i < (unsigned int)size)
	{
		node = ft_stacknew(arr[i], i);
		ft_stackadd_back(&list, node);
		i++;
	}
	return (list);
}

int	initialize(t_stack **a, char *argv[])
{
	int	*num_arr;
	int	needs_free;
	int	size;

	needs_free = 0;
	if (ft_strchr(argv[1], ' '))
	{
		argv = ft_split(argv[1], ' ');
		needs_free = 1;
	}
	else
		argv = argv + 1;
	size = validate(argv);
	num_arr = strarr_to_numarr(argv, needs_free);
	*a = numarr_to_list(num_arr, size);
	sort_array(num_arr, size);
	assign_index(*a, size, num_arr);
	free(num_arr);
	return (size);
}
