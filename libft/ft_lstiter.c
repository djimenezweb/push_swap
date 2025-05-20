/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:30:59 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:20:17 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.
lst:	un puntero al primer nodo.
f:		un puntero a la función que utilizará cada nodo. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
