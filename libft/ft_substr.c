/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:26:36 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 11:05:27 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La substr-
ing empieza desde el índice ’start’ y tiene una longitud máxima ’len’.

s:		La string desde la que crear la substring.
start:	El índice del caracter en ’s’ desde el que empezar la substring.
len:	La longitud máxima de la substring.

Devuelve la substring resultante o NULL si falla la reserva de memoria. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return ((void *)0);
	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (!substr)
		return ((void *)0);
	while (s[start] && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
