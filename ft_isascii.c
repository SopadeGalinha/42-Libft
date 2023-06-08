/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:06:54 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/06 20:06:54 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: test for ASCII character
** DESCRIPTION: The isascii() function tests for an ASCII character,
** which is any character between 0 and 127.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
