/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:23:16 by jhogonca          #+#    #+#             */
/*   Updated: 2023/09/14 01:23:16 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_free_array(char **split_ptr)
{
	int i;

	i = -1;
	while (split_ptr[++i])
		free(split_ptr[i]);
	free(split_ptr);
}
