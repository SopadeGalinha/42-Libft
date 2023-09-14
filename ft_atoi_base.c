/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:41:50 by jhogonca          #+#    #+#             */
/*   Updated: 2023/09/12 23:41:50 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_base(char c, const char *base);
int			ft_atoi_base_aux(const char *nptr, const char *base, int sign);

// Convert a string to an integer according to the base passed as argument
int	ft_atoi_base(const char *nptr, const char *base)
{
	int	sign;

	sign = 1;
	if (!nptr || !base || ft_strlen(base) < 2 || ft_strlen(base) > 16)
		return (0);
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-' && ft_strlen(base) == 10)
			sign = -1;
	if (*nptr == '0' && (*(nptr + 1) == 'x' || *(nptr + 1) == 'X'))
		nptr += 2;
	return (ft_atoi_base_aux(nptr, base, sign));
}

static int	is_in_base(char c, const char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

int	ft_atoi_base_aux(const char *nptr, const char *base, int sign)
{
	int	result;

	result = 0;
	while (is_in_base(ft_tolower(*nptr), base) != -1)
	{
		result *= ft_strlen(base) + is_in_base(ft_tolower(*nptr++), base);
		if (result < 0)
			return (0);
	}
	return (result * sign);
}
