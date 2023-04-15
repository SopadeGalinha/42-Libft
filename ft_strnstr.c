/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:31:21 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 13:31:21 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** SYNOPSIS: find a substring within a string
** DESCRIPTION: searches for the first occurrence of a
** null-terminated string needle within another null-terminated
** string haystack, but only up to the first len characters of haystack.
** If needle is an empty string, haystack is returned;
** if needle does not occur in haystack, NULL is returned;
** otherwise, a pointer to the first character of the first occurrence
** of needle is returned.
** Both haystack and needle must be null-terminated strings.
** If either haystack or needle is NULL, the function returns NULL.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (needle[n] == 0)
		return ((char *)haystack);
	while (haystack[h])
	{
		while (haystack[h + n] && haystack[h + n] == needle[n] && len > (h + n))
			n++;
		if (!(needle[n]))
			return ((char *)haystack + h);
		n = 0;
		h++;
	}
	return (0);
}
