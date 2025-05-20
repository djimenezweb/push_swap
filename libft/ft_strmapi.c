/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:54:09 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 16:33:51 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Aplica la función ’f’ a cada carácter de la cadena ’s’, pasando su índice
como primer argumento y el propio carácter como segundo argumento. Se crea
una nueva cadena (utilizando malloc(3)) para recoger los resultados de las
sucesivas aplicaciones de ’f’.

Devuelve la string creada tras el correcto uso de ’f’ sobre cada carácter.
NULL si falla la reserva de memoria. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;
	int		i;

	if (!f)
	{
		return ((void *)0);
	}
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return ((void *)0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
