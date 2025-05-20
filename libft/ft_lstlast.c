/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:11:54 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 17:28:57 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Devuelve el último nodo de la lista.
lst: el principio de la lista. 
t1:KO t2:KO t3:KO t4:KO */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return ((void *)0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/* int	main(void)
{
	int		size;
	t_list	*last;
	t_list	*node1 = ft_lstnew("My first node");
	t_list	*node2 = ft_lstnew("My second node");
	t_list	*node3 = ft_lstnew("My third node");
	t_list	*node4 = ft_lstnew("My fourth node");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstadd_back(&node1, node4);
	size = ft_lstsize(node1);
	ft_putnbr_fd(size, 1);
	last = ft_lstlast(node1);
	ft_putstr_fd(last->content, 1);
	return (0);
}
 */