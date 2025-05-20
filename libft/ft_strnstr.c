/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:53:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 17:27:01 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function locates the first occurrence of the null-terminated
string LITTLE in the string BIG, where not more than LEN characters are
searched. Characters that appear after a ‘\0’ character are not searched.

If LITTLE is an empty string, BIG is returned.
If LITTLE occurs nowhere in BIG, NULL is returned.
Returns a pointer to the first character of the first occurrence of LITTLE. */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (little[0] == '\0')
		return ((char *)big);
	b = 0;
	while (big[b] && b <= len - 1)
	{
		l = 0;
		while (b + l < len && little[l] && big[b + l] == little[l])
		{
			l++;
		}
		if (little[l] == '\0')
		{
			return ((char *)&big[b]);
		}
		b++;
	}
	return ((void *)0);
}
