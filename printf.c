/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateocovachov2 <mateocovachov2@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:46:53 by mateocovachov2    #+#    #+#             */
/*   Updated: 2024/09/07 15:52:08 by mateocovachov2   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	handle_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		count += ft_putstr("(nil)");
	else
	{
		count += ft_putstr("0x");
		count += ft_puthex((unsigned long)ptr);
	}
	return (count);
}

static int	handle_format_specifier(char format, va_list args)
{
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_unsig_nbr(va_arg(args, unsigned int)));
	else if (format == 'p')
		return (handle_pointer(va_arg(args, void *)));
	else if (format == 'x')
		return (ft_puthex(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_put_upper_hex(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	if (!format)
		return (0);
	while (*format)
	{
		if (*format == '%')
			count += handle_format_specifier(*(++format), args);
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
