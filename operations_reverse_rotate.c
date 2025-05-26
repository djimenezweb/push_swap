/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse_rotate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:53:03 by danielji          #+#    #+#             */
/*   Updated: 2025/05/26 09:59:03 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// Shift down all elements of stack `a` by 1.
// The first element becomes the last one.
void	rra(t_list **a, t_list **b)
{
	(void)b;
	ft_rrotate(a);
	ft_printf("rra\n");
}

// Shift down all elements of stack `b` by 1.
// The first element becomes the last one.
void	rrb(t_list **a, t_list **b)
{
	(void)a;
	ft_rrotate(b);
	ft_printf("rrb\n");
}

// `rra` and `rrb` at the same time.
void	rrr(t_list **a, t_list **b)
{
	ft_rrotate(a);
	ft_rrotate(b);
	ft_printf("rrr\n");
}