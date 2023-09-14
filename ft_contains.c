/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:20:49 by jhogonca          #+#    #+#             */
/*   Updated: 2023/09/14 01:20:49 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_contains(const char *haystack, const char *needle)
{
	int	h;
	int	n;

	n = 0;
	h = -1;
	if (needle[n] == 0)
		return (false);
	while (haystack[++h])
	{
		while (haystack[h + n] && haystack[h + n] == needle[n])
			n++;
		if (!(needle[n]))
			return (true);
		n = 0;
	}
	return (false);
}
