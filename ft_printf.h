#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_puthex(unsigned long n);
void	ft_put_upper_hex(unsigned long n);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

void run_tests(void);
// int main();
int	ft_printf(char const *, ...);


#endif
