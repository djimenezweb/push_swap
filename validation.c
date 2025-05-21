/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:18:10 by danielji          #+#    #+#             */
/*   Updated: 2025/05/21 13:33:20 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

static void	error(void)
{
	ft_printf("Error\n");
	exit(2);
}

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

static int	ft_issigneddigit(int c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+')
	{
		return (1);
	}
	return (0);
}

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

/* Errors:
- Some arguments not being integers
- Some arguments exceeding the integer limits
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
