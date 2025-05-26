/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:47:37 by danielji          #+#    #+#             */
/*   Updated: 2025/05/26 09:52:25 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// Take the first element at the top of `b` and put it at the top of `a`.
void	pa(t_list **a, t_list **b)
{
	ft_push(b, a);
	ft_printf("pa\n");
}

// Take the first element at the top of `a` and put it at the top of `b`.
void	pb(t_list **a, t_list **b)
{
	ft_push(a, b);
	ft_printf("pb\n");
}