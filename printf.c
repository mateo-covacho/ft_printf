/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateocovachov2 <mateocovachov2@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:18:20 by mateocovachov2    #+#    #+#             */
/*   Updated: 2024/08/30 15:51:42 by mateocovachov2   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (!format)
		return 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (*format == 'c')
				count += ft_putchar(va_arg(args, int));
			else if (*format == 'd' || *format == 'i')
				count += ft_putnbr(va_arg(args, int));
			else if (*format == 'u')
				count += ft_unsig_nbr(va_arg(args, unsigned int));
			else if (*format == 'p')
			{
				void *ptr = va_arg(args, void *);
				if (!ptr)
					count += ft_putstr("(nil)");
				else
				{
					count += ft_putstr("0x");
					count += ft_puthex((unsigned long)ptr);
				}
			}
			else if (*format == 'x')
				count += ft_puthex(va_arg(args, unsigned int));
			else if (*format == 'X')
				count += ft_put_upper_hex(va_arg(args, unsigned int));
			else if (*format == '%')
				count += ft_putchar('%');
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return count;
}
