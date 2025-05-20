/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:06:24 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:17:47 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cuenta el número de nodos de una lista.
lst: el principio de la lista.
Devuelve la longitud de la lista. */

#include "libft.h"

int	ft_lstsize(t_list *lst)
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
