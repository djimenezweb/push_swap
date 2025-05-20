/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:53:25 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 17:31:44 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reserva (utilizando malloc(3)) un array de strings resultante de separar
la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.
El array debe terminar con un puntero NULL.

Devuelve el array de nuevas strings resultante de la separación.
NULL si falla la reserva de memoria. */

#include "libft.h"

static char	*trim(const char *s, char c)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s);
	if (end == 0)
		return (ft_strdup(""));
	end--;
	while (s[start] == c)
		start++;
	while (s[end] == c)
		end--;
	if (start > end)
		return (ft_strdup(""));
	trimmed = ft_substr(s, start, (end - start + 1));
	return (trimmed);
}

static size_t	get_string_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			i++;
			count++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_array(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

static void	**string_to_array(char **arr, char const *str, char c, size_t count)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	while (count--)
	{
		while (str[start] == c)
			start++;
		end = start + 1;
		while (str[end] && (str[end] != c))
			end++;
		arr[i] = ft_substr(str, start, (end - start));
		if (!arr[i])
		{
			free_array(arr, i);
			return ((void *)0);
		}
		start = end;
		i++;
	}
	arr[i] = ((void *)0);
	return ((void *)0);
}

/* DOUBLE FREE ISSUE IN FT_SPLIT
You call string_to_array but you don’t check its return value or status
afterward. It is declared to return a void **, but the returned value is not
used or checked in ft_split.
When ft_substr fails (i.e., returns NULL), the function calls free_array,
freeing all previously allocated strings in arr, but it does not inform the
caller (ft_split) that it failed—because you're not using the return value!

To fix this you need to check the result of string_to_array, and only return
arr if it succeeded. */

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**arr;
	size_t	count;

	if (!s)
		return ((void *)0);
	str = trim(s, c);
	if (!str)
		return ((void *)0);
	count = get_string_count(str, c);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
	{
		free(str);
		return ((void *)0);
	}
	string_to_array(arr, str, c, count);
	free(str);
	return (arr);
}
