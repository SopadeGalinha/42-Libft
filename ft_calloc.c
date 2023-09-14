/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:22:13 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 14:22:13 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <stdlib.h>
** DESCRIPTION: calloc() function is used to dynamically allocate
** multiple blocks of memory. calloc needs two arguments.
** The number of blocks(size_t numb) and the size of each block(size_t size).
** Memory allocated by calloc is initialized to zero.
** calloc return NULL when sufficient memory is not available in the heap.
*/

#include "libft.h"

void	*ft_calloc(size_t numb, size_t size)
{
	void	*dest;
	size_t	full_size;

	full_size = size * numb;
	dest = malloc(full_size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, full_size);
	return (dest);
}
