/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:36:59 by danielji          #+#    #+#             */
/*   Updated: 2025/04/28 12:31:00 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns a pointer to a new string which is a duplicate of the string s.
Memory for the new string is obtained with malloc(3) and freed with free(3).
It returns NULL if insufficient memory was available */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	i;

	if (!str)
		return ((void *)0);
	i = 0;
	dup = malloc(ft_strlen(str) + 1);
	if (!dup)
		return ((void *)0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
