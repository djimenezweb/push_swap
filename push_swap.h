/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:24:12 by danielji          #+#    #+#             */
/*   Updated: 2025/06/01 23:17:38 by danielji         ###   ########.fr       */
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

// Algorithms
t_list	*get_smallest(t_list **a);
void	sort_three(t_list **a, t_list **b);
void	basic_sort(t_list **a, t_list **b);

// Inefficient sorting algorithm
void	ineffsort(t_list **a, t_list **b);

// Helpers
int		get_content(t_list *node);
void	print_list(char *title, t_list *lst);
int		is_sorted(t_list *node);
void	free_array_of_strings(char **arr);

// Validation
void	validate(char **arr);

// Swap Moves
void	ft_swap(t_list	**stack);
void	sa(t_list **a, t_list **b);
void	sb(t_list **a, t_list **b);
void	ss(t_list **a, t_list **b);

// Push Moves
void	ft_push(t_list	**src_stack, t_list	**dst_stack);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

// Rotate Moves
void	ft_rotate(t_list **stack);
void	ra(t_list **a, t_list **b);
void	rb(t_list **a, t_list **b);
void	rr(t_list **a, t_list **b);

// Reverse Rotate Moves
void	ft_rrotate(t_list **stack);
void	rra(t_list **a, t_list **b);
void	rrb(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);

#endif
