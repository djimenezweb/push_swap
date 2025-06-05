/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:06:24 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 09:50:06 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstack.h"

/* Counts the number of nodes in the list `lst`. */
int	ft_stacksize(t_stack *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
