/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:19:31 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:12:54 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Envía el carácter ’c’ al file descriptor especificado. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
