/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:47:37 by danielji          #+#    #+#             */
/*   Updated: 2025/06/01 09:47:35 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../push_swap.h"

// Take the first element at the top of `src` and put it at the top of `dst`.
// Do nothing if `src` is empty.
void	ft_push(t_list **src_stack, t_list **dst_stack)
{
	t_list	*first;

	if (!src_stack || !*src_stack)
		return ;
	first = *src_stack;
	*src_stack = first->next;
	ft_lstadd_front(dst_stack, first);
}

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
