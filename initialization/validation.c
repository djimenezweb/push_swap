/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:18:10 by danielji          #+#    #+#             */
/*   Updated: 2025/06/11 01:19:46 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Iterates through an array of strings, frees each string and the array.
void	free_array(char **arr)
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

// Frees array and list, prints error message and exits.
void	free_and_exit(char **arr, t_stack **stack)
{
	if (arr)
		free_array(arr);
	if (stack)
		ft_stackclear(stack, free);
	ft_putstr_fd("Error\n", 2);
	exit(2);
}

// Checks if a string is a valid signed or unsigned number.
// `25`, `-13`, `+96` are valid.
// `--25`, `-+13`, `9-6`, `87-+` are not valid.
int	ft_isvalidnumber(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (!str[i + 1] || !ft_isdigit(str[i + 1]))
			return (0);
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

// Converts a string into `long` number. Returns `0` on error.
long	ft_atol(const char *str)
{
	long	nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + *str - '0';
		str++;
	}
	return ((nbr * sign));
}

// Checks for duplicate numbers
void	are_repeated(t_stack **stack)
{
	t_stack	*current;
	t_stack	*node;

	current = *stack;
	while (current && current->next)
	{
		node = current->next;
		while (node)
		{
			if (current->value == node->value)
				free_and_exit(NULL, stack);
			node = node->next;
		}
		current = current->next;
	}
}
