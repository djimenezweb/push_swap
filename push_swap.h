/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:24:12 by danielji          #+#    #+#             */
/*   Updated: 2025/06/10 23:04:59 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "libstack/libstack.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

// Helpers
int		is_sorted(t_stack *node);
int		is_revsorted(t_stack *node);
t_stack	*get_smallest(t_stack *a);

// Algorithms
void	rev_sort(t_stack **a, t_stack **b);
void	sort_three(t_stack **a, t_stack **b);
void	basic_sort(t_stack **a, t_stack **b);
int		count_bits(int num);
void	radix_sort(t_stack **a, t_stack **b);

// Initialization
t_stack	*get_unindexed_smallest(t_stack *a);
void	assign_index(t_stack *a);
void	initialize(t_stack **a, int argc, char **argv);

// Validation
void	free_array(char **arr);
void	free_and_exit(char **arr, t_stack **stack);
int		ft_isvalidnumber(char *str);
long	ft_atol(const char *str);
void	are_repeated(t_stack **stack);

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
