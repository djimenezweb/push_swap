/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:42:01 by danielji          #+#    #+#             */
/*   Updated: 2025/05/30 10:45:04 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Swap the first 2 elements at the top of stack `a`
void	sa(t_list **a, t_list **b)
{
	(void)b;
	ft_swap(a);
	ft_printf("sa\n");
}

// Swap the first 2 elements at the top of stack `b`
void	sb(t_list **a, t_list **b)
{
	(void)a;
	ft_swap(b);
	ft_printf("sb\n");
}

// `sa` and `sb` at the same time
void	ss(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}
