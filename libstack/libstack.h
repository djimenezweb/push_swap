/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:11:38 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 11:41:46 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LIBSTACK_H
# define LIBSTACK_H

# include <stdlib.h>

typedef struct s_stack
{
	int				*content;
	unsigned int	*key;
	struct s_stack	*next;
}					t_stack;

// Libft Bonus
t_stack	*ft_stacknew(int *content, unsigned int *key);
void	ft_stackadd_front(t_stack **lst, t_stack *new);
int		ft_stacksize(t_stack *lst);
t_stack	*ft_stacklast(t_stack *lst);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
void	ft_stackdelone(t_stack *lst, void (*del)(void *));
void	ft_stackclear(t_stack **lst, void (*del)(void *));
void	ft_stackiter(t_stack *lst, void (*f)(void *));
t_stack	*ft_stackmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));

#endif
