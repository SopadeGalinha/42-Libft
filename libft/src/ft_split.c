/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:58:27 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 16:58:27 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Allocates (with malloc(3)) and returns an array of “fresh”
**  strings (all ending with ’\0’, including the array itself)
**  obtained by spliting s using the character c as a delimiter.
**  If the allocation fails the function returns NULL. Example:
**  ft_strsplit("*hello*fellow***students*", ’*’) returns the 
**  array ["hello", "fellow", "students"].
** Param. #1 The string to split.
** Param. #2 The delimiter character.
** Return value The array of “fresh” strings result of the split.
** ft_strsplit("*hello*fellow***students*", ’*’)
** returns the array ["hello", "fellow", "students"].
*/

#include "libft.h"

static int	wordcount(char const *str, char delim);

char	**ft_split(char const *s, char delim)
{
	char	**newarray;
	int		i;
	int		j;
	int		start;

	if (!s || !delim)
		return (NULL);
	newarray = malloc(sizeof(char *) * (wordcount(s, delim) + 1));
	if (newarray == NULL)
		return (NULL);
	i = 0;
	j = -1;
	start = -1;
	while (++j <= ft_strlen(s))
	{
		if (s[j] != delim && start < 0)
			start = j;
		else if ((s[j] == delim || j == ft_strlen(s)) && start >= 0)
		{
			newarray[i++] = ft_substr(s, start, j - start);
			start = -1;
		}
	}
	newarray[i] = NULL;
	return (newarray);
}

static int	wordcount(char const *str, char delim)
{
	int	trigger;
	int	count;

	trigger = 0;
	count = 0;
	while (*str)
	{
		if (*str != delim && trigger == 0)
		{
			count++;
			trigger = 1;
		}	
		else if (*str == delim && trigger == 1)
			trigger = 0;
		str++;
	}
	return (count);
}
