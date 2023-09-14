/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:02:37 by jhogonca          #+#    #+#             */
/*   Updated: 2023/09/14 01:02:37 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(const char c, t_data *st)
{
	st->count += write(st->fd, &c, 1);
}

static void	ft_putstr(const char *str, t_data *st)
{
	if (!str)
		return (ft_putstr("(null)", st));
	while (*str)
		ft_putchar(*str++, st);
}

static void	ft_hex_base(unsigned long nb, int fmt, t_data *st)
{
	char	*base;

	if (fmt == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (fmt == 'b')
		st->hex_ref = 2;
	if (fmt == 'o')
		st->hex_ref = 8;
	if (fmt == 'u')
		st->hex_ref = 10;
	if (nb >= st->hex_ref)
		ft_hex_base(nb / st->hex_ref, fmt, st);
	ft_putchar(base[nb], st);
}

static void	flag_conversions(char fmt, t_data *st, va_list args)
{
	if (fmt == 'c')
		ft_putchar(va_arg(args, int), st);
	if (fmt == 's')
		ft_putstr(va_arg(args, char *), st);
	if (fmt == 'd' || fmt == 'i' || fmt == 'o' || fmt == 'b')
	{
		st->pointer = va_arg(args, int);
		if (st->pointer < 0)
		{
			ft_putchar('-', st);
			st->pointer *= -1;
		}
		ft_hex_base(st->pointer, 'u', st);
	}
	if (fmt == 'x' || fmt == 'X' || fmt == 'u')
		ft_hex_base(va_arg(args, unsigned int), fmt, st);
	if (fmt == 'p')
	{
		st->pointer = va_arg(args, long);
		if (st->pointer == 0)
			return (ft_putstr("(nil)", st));
		ft_putstr("0x", st);
		ft_hex_base(st->pointer, 'x', st);
	}
}

int	ft_printf_fd(int fd, const char *fmt, ...)
{
	t_data	st;
	va_list	args;

	st = (t_data){0};
	va_start(args, fmt);
	st.fd = fd;
	while (fmt[st.index])
	{
		st.hex_ref = 16;
		if (fmt[st.index] == '%')
		{
			if (fmt[++st.index] == '%')
				ft_putchar('%', &st);
			else
				flag_conversions(fmt[+st.index++], &st, args);
		}
		else
			ft_putchar(fmt[st.index++], &st);
	}
	va_end(args);
	return (st.count);
}
