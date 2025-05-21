/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:18:10 by danielji          #+#    #+#             */
/*   Updated: 2025/05/21 13:43:11 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Throws error and exits.
static void	error(void)
{
	ft_printf("Error\n");
	exit(2);
}

// Checks if array has repeated `int` numbers.
static void	isduplicated(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 1;
		while (arr[i + j])
		{
			if (ft_atoi(arr[i]) == ft_atoi(arr[i + j]))
				error();
			j++;
		}
		i++;
	}
}

// Checks if character is a digit or a `+` or `-` sign.
static int	ft_issigneddigit(int c)
{
	if (ft_isdigit(c) || c == '-' || c == '+')
	{
		return (1);
	}
	return (0);
}

// Converts a string into `long` number.
// Returns `0` on error.
static long	ft_atol(const char *str)
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

/* Checks for the following errors:
- Some arguments not being integers
- Some arguments exceeding the integer limits
  INT_MIN:	-2.147.483.648
  INT_MAX:	 2.147.483.647
- Presence of duplicates */
void	validate(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		if (ft_atol(arr[i]) < INT_MIN || ft_atol(arr[i]) > INT_MAX)
			error();
		j = 0;
		while (arr[i][j])
		{
			if (!ft_issigneddigit(arr[i][j]))
				error();
			j++;
		}
		i++;
	}
	isduplicated(arr);
}
