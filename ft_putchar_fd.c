/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:40:10 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 18:40:10 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  The fputc() function writes the character c (converted to an ``unsigned
**	char'') to the output stream pointed to by stream.
**  42 PDF] Outputs the character ’c’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
