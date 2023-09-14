/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:33:28 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/06 19:33:28 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <stdlib.h>
** SYNOPSIS: Convert a string into an integer
** DESCRIPTION: converts the initial portion
**		of the string pointed to by str to int
** RETURN VALUE: The converted value or 0 on error.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned int	result;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
		if (result > INT_MAX)
			return (INT_MIN);
	}
	return (result * sign);
}
