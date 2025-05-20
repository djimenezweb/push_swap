/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:39:16 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:15:18 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’
se inicializa con el contenido del parámetro ’content’.
La variable ’next’, con NULL.
Devuelve el nuevo nodo. */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
	{
		return ((void *)0);
	}
	node->content = content;
	node->next = (void *)0;
	return (node);
}
