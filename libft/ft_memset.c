/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:36:50 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 16:10:18 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function fills the first n bytes of the memory area pointed
to by s with the constant byte c. Returns a pointer to the memory area s. */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_char;

	i = 0;
	s_char = (unsigned char *)s;
	while (i < n)
	{
		s_char[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
