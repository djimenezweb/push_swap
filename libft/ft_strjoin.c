/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:01:43 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 16:32:09 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reserva (con malloc(3)) y devuelve una nueva string, formada por la
concatenación de ’s1’ y ’s2’.

s1: La primera string.
s2: La string a añadir a ’s1’.

Devuelve la nueva string o NULL si falla la reserva de memoria. */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*str;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = malloc(len + 1);
	if (!str)
		return ((void *)0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
