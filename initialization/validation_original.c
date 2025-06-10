/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_original.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:18:10 by danielji          #+#    #+#             */
/*   Updated: 2025/06/10 21:09:44 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Throws error and exits.
void	error(void)
{
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
		i++;
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

/* Checks for the following errors and returns `size`:
- Some arguments exceeding `INT_MIN` and `INT_MAX`
- Some arguments not being integers
- Presence of duplicates*/
int	validate(char **arr)
{
	int		i;
	int		j;
	long	nbr;

	i = 0;
	while (arr[i])
	{
		j = 1;
		nbr = ft_atol(arr[i]);
		if (ft_strlen(arr[i]) >= 10 && (nbr < INT_MIN || nbr > INT_MAX))
			error();
		if (!ft_isvalidnumber(arr[i]))
			error();
		while (arr[i + j])
		{
			if (ft_atoi(arr[i]) == ft_atoi(arr[i + j]))
				error();
			j++;
		}
		i++;
	}
	return (i);
}
