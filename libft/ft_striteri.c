/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:54:12 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 16:12:50 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros
el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, que
podrá modificarse si es necesario. */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
