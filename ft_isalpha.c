/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:04:30 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/06 20:04:30 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: alphabetic character test
** DESCRIPTION:	The isalpha() function tests for any
    character for which isupper(3) or islower(3) is true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
