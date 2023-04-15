/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:05:51 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 16:05:51 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of ’s1’
** with the characters specified in ’set’ removed from the beginning
** and the end of the string.
*/

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_isset(s1[i], set))
		i++;
	if (i == len)
		return (ft_strdup(""));
	j = ft_strlen(s1);
	while (ft_isset(s1[--j], set))
		;
	j = (j + 1) - i;
	str = ft_substr(s1, i, j);
	return (str);
}
