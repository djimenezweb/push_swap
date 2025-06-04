/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:30:59 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 09:52:44 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libstack.h"

/* Iterates through the list `lst` and applies the function `f`
to the content of each node.*/
void	ft_stackiter(t_stack *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
