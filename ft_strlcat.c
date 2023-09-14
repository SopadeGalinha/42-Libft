/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:40:32 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 10:40:32 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION:
**	strlcat() appends string src to the end of dst.
**	It will append at most dstsize strlen(dst) - 1 characters.
**	It will then NUL-terminate, unless dstsize is 0 or
**	the original dst string was longer than dstsize
**	(in practice this should not happen as it means that
**	either dstsize is incorrect or that dst is not a properstring).
**	If the src and dst strings overlap, the behavior is undefined.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != 0 && (i + 1) < size)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (i + ft_strlen(&src[j]));
}
