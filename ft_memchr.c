/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:11:03 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/06 20:11:03 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
**	DESCRIPTION: The memchr() function scans the initial "n" bytes
**	of the memory area pointed to by "s" for the first instance of "c".
**	Both "c" and the bytes of the memory area
**	pointed to by "s" are interpreted as unsigned char.
** 	The memchr() function locates the first occurrence 
**  of "c" (converted to an unsigned char) in string "s".
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	i = -1;
	b = (void *)s;
	while (++i < n)
		if (b[i] == (unsigned char)c)
			return (&b[i]);
	return (NULL);
}
