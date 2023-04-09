/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:19:37 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/06 20:19:37 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DESCRIPTION: The memmove() function copies n 
**	bytes from string src to string dest. The two strings may overlap;
**	the copy is always done in a non-destructive manner.
**	The difference between memmove and memcpy it's that memmove uses a buffer*/

#include "../includes/libft.h"

static void	*ft_revmemcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest || !src)
		return (0);
	d = dest + n - 1;
	s = src + n - 1;
	while (n-- > 0)
		*d-- = *s--;
	return (d);
}

void	*ft_memmove(void *dest, const void*src, size_t n)
{
	if (!dest || !src)
		return (0);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		ft_revmemcpy(dest, src, n);
	return (dest);
}
