/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:24:12 by danielji          #+#    #+#             */
/*   Updated: 2025/05/23 13:28:08 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

// Main functions
void	print_list(char *title, t_list *lst);
t_list	*initialize(char **arr);

// Validation
void	validate(char **arr);

// Operations helpers
void	ft_swap(t_list	**stack);
void	ft_push(t_list	**src_stack, t_list	**dst_stack);
void	ft_rotate(t_list **stack);
void	ft_rrotate(t_list **stack);

// Operations


#endif
