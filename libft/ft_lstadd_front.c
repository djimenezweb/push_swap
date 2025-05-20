/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:53:18 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:16:10 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Añade el nodo ’new’ al principio de la lista ’lst’.
lst: la dirección de un puntero al primer nodo de una lista.
new: un puntero al nodo que añadir al principio de la lista. */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
