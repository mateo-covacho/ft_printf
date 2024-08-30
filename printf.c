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

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				char *str = va_arg(args, char *);
				ft_putstr(str);
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				ft_putchar(c);
			}
			else if (*format == 'd')
			{
				int num = va_arg(args, int);
				ft_putnbr(num);
			}
			else if (*format == 'i')
			{
				int num = va_arg(args, int);
				ft_putnbr(num);
			}
			else if (*format == 'u')
			{
				int num = va_arg(args, int);
				ft_putnbr(num);
			}
			else if (*format == 'p')
			{
				void *ptr = va_arg(args, void *);
				if (!ptr)
					ft_putstr("(nil)");
				else {
					ft_putstr("0x");
					ft_puthex((unsigned long)ptr);
				}
			}
			else if (*format == 'x')
			{
				int num = va_arg(args, int);
				ft_puthex(num);
			}
			else if (*format == 'X')
			{
				int num = va_arg(args, int);
				ft_put_upper_hex(num);
			}
			else if (*format == '%')
			{
				ft_putchar('%');
			}
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return 0;
}
