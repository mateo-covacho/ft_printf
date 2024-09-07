/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateocovachov2 <mateocovachov2@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:46:53 by mateocovachov2    #+#    #+#             */
/*   Updated: 2024/09/07 15:53:40 by mateocovachov2   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_puthex(unsigned long n);
int		ft_put_upper_hex(unsigned long n);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsig(unsigned int n);
int		ft_unsig_nbr(int n);
int		ft_printf(const char *format, ...);
int		ft_printf(const char *format, ...);
void	run_tests(void);
// int main();

#endif
