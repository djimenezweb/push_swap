/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:24:12 by danielji          #+#    #+#             */
/*   Updated: 2025/05/26 21:12:09 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

// Main functions
t_list	*initialize(char **arr);
void	sort_three(t_list **a, t_list **b);

// Helpers
int		parse_content(t_list *node);
void	print_list(char *title, t_list *lst);
int		is_sorted(t_list *stack);
void	free_array_of_strings(char **arr);

// Validation
void	validate(char **arr);

// Operations helpers
void	ft_swap(t_list	**stack);
void	ft_push(t_list	**src_stack, t_list	**dst_stack);
void	ft_rotate(t_list **stack);
void	ft_rrotate(t_list **stack);

// Operations
void	sa(t_list **a, t_list **b);
void	sb(t_list **a, t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a, t_list **b);
void	rb(t_list **a, t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a, t_list **b);
void	rrb(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);

#endif
