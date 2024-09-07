/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_upper_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateocovachov2 <mateocovachov2@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:46:53 by mateocovachov2    #+#    #+#             */
/*   Updated: 2024/09/07 15:48:17 by mateocovachov2   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_put_upper_hex(unsigned long n)
{
	int	count;

	count = 0;
	if (n > 15)
		count += ft_put_upper_hex(n / 16);
	if (n % 16 < 10)
		count += ft_putchar(n % 16 + '0');
	else
		count += ft_putchar(n % 16 - 10 + 'A');
	return (count);
}
