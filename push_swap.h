/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:24:12 by danielji          #+#    #+#             */
/*   Updated: 2025/06/04 11:31:14 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "libstack/libstack.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

// Validation
void	validate(char **arr);

// Helpers
t_stack	*initialize(char **arr, int needs_free);
char	**split_args(char **argv, int *needs_free);
int		get_content(t_stack *node);
int		is_sorted(t_stack *node);
void	print_list(char *title, t_stack *lst);

// Algorithms
t_stack	*get_smallest(t_stack **a);
void	sort_three(t_stack **a, t_stack **b);
void	basic_sort(t_stack **a, t_stack **b);
void	ineffsort(t_stack **a, t_stack **b);

// Swap Moves
void	ft_swap(t_stack **stack);
void	sa(t_stack **a, t_stack **b);
void	sb(t_stack **a, t_stack **b);
void	ss(t_stack **a, t_stack **b);

// Push Moves
void	ft_push(t_stack **src_stack, t_stack **dst_stack);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

// Rotate Moves
void	ft_rotate(t_stack **stack);
void	ra(t_stack **a, t_stack **b);
void	rb(t_stack **a, t_stack **b);
void	rr(t_stack **a, t_stack **b);

// Reverse Rotate Moves
void	ft_rrotate(t_stack **stack);
void	rra(t_stack **a, t_stack **b);
void	rrb(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif
