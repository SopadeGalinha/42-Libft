/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:52:45 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/06 19:52:45 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: alphanumeric character test
** DESCRIPTION: The isalnum() function tests for any 
** character for which isalpha or isdigit is true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}
