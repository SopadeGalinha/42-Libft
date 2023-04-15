/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:32:42 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 15:32:42 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION:
**    Allocates (with malloc(3)) and returns a “fresh” substring
**    from the string given as argument.
** 	 - The substring begins at index "start" and is of size len. 
**	 - If start and len aren’t refering to a 
**		valid substring, the behavior is undefined. 
**	 - If the allocation fails, the function returns NULL.
**    Param. #1 The string from which create the substring.
**    Param. #2 The start index of the substring.
**    Param. #3 The size of the substring.
**    Return value: The substring.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, &s[start], len);
	substr[len] = '\0';
	return (substr);
}
