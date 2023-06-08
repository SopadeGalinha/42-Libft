/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:08:30 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/06 20:08:30 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: decimal-digit character test
** DESCRIPTION:	The isdigit()  function tests for a decimal digit character.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
