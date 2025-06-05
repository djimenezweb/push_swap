/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:04:53 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 09:46:18 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstack.h"

/* Adds the node `new` at the end of the stack */
void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		last = ft_stacklast(*lst);
		last->next = new;
	}
	else
	{
		*lst = new;
	}
}
