/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:05:18 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 16:32:31 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

It takes the full size of the buffer (not just the length) and guarantee
to NUL-terminate the result (as long as size is larger than 0 or as long as
there is at least one byte free in dst).
A byte for the NUL should be included in size.
Both src and dst must be NUL-terminated.

Returns the total length of the string it tried to create, that means the
initial length of dst plus the length of src.

If strlcat() traverses size characters without finding a NUL, the length of
the string is considered to be size and the destination string will not be
NUL-terminated (since there was no space for the NUL).
This keeps strlcat() from running off the end of a string.
In practice this should not happen. The check exists to prevent potential
security problems in incorrect code. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_i;
	size_t	src_i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dsize <= dst_len)
		return (dsize + src_len);
	dst_i = dst_len;
	src_i = 0;
	while (src[src_i] && (dst_i + src_i < dsize - 1))
	{
		dst[dst_i + src_i] = src[src_i];
		src_i++;
	}
	dst[dst_i + src_i] = '\0';
	return (dst_len + src_len);
}
