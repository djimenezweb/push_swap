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

int	count_bits(int max)
{
	int	bits;

	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

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
