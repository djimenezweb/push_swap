/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:53:18 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 09:46:54 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstack.h"

/* Adds the node `new` at the beginning of the list `lst`.*/
void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
