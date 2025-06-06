/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:41:17 by danielji          #+#    #+#             */
/*   Updated: 2025/06/05 11:48:56 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* Returns number of bits needed to represent the integer `max` in binary
excluding leading zeros. For example:
- 3 is `11` in binary (2 bits)
- 255 is `11111111` in binary (8 bits)
- 256 is `100000000` in binary (9 bits) */
int	count_bits(int max)
{
	int	bits;

	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

/* Sorts elements based on the binary digits of their indices, starting
from the least significant digit (rightmost) to the most significant
digit (leftmost). */
void	radix_sort(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	size;
	int	bit_max;

	i = 0;
	size = ft_stacksize(*a);
	bit_max = count_bits(size - 1);
	while (i < bit_max)
	{
		j = 0;
		while (j < size)
		{
			if (*a && (*a)->index && ((*a)->index >> i) & 1)
				ra(a, b);
			else
				pb(a, b);
			j++;
		}
		while (ft_stacksize(*b) > 0)
			pa(a, b);
		i++;
	}
}
