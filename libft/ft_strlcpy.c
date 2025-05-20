/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:44:18 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 16:32:39 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcpy() function copies up to size - 1 characters from the
NUL-terminated string src to dst, NUL-terminating the result.

It takes the full size of the buffer (not just the length) and guarantee
to NUL-terminate the result (as long as size is larger than 0).
A byte for the NUL should be included in size. src must be NUL-terminated.

Returns the total length of the string it tried to create, that means the
length of src. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize > 0)
	{
		while (src[i] && i < (dsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
