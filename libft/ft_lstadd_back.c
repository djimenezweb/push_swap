/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:04:53 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:26:19 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Añade el nodo ’new’ al final de la lista ’lst’.
lst:	el puntero al primer nodo de una lista.
new:	el puntero a un nodo que añadir a la lista. */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
	{
		*lst = new;
	}
}
