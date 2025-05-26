/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:53:03 by danielji          #+#    #+#             */
/*   Updated: 2025/05/26 09:57:15 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// Shift up all elements of stack `a` by 1.
// The first element becomes the last one.
void	ra(t_list **a, t_list **b)
{
	(void)b;
	ft_rotate(a);
	ft_printf("ra\n");
}

// Shift up all elements of stack `b` by 1.
// The first element becomes the last one.
void	rb(t_list **a, t_list **b)
{
	(void)a;
	ft_rotate(b);
	ft_printf("rb\n");
}

// `ra` and `rb` at the same time.
void	rr(t_list **a, t_list **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}