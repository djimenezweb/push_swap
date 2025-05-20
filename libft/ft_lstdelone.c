/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:27:53 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:20:32 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Toma como parámetro un nodo ’lst’ y libera la memoria del contenido
utilizando la función ’del’ dada como parámetro, además de liberar el nodo.
La memoria de ’next’ no debe liberarse.

lst:	el nodo a liberar.
del:	un puntero a la función utilizada para liberar el contenido del nodo.

Función autorizada: free */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
