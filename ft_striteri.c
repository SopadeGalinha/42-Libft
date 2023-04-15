/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:35:23 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 18:35:23 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: Applies the function f to each character of the string passed
** as argument, and passing its index as first argument. Each
** character is passed by address to f to be modified if necessary
Param. #1: The string to iterate.
Param. #2: The function to apply to each character of s and its index.
Return value: None */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
	return ;
}
