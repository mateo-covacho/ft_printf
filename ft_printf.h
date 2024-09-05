#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_putchar(char c);
int ft_puthex(unsigned long n);
int ft_put_upper_hex(unsigned long n);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putnbr_unsig(unsigned int n); 
int ft_unsig_nbr(int n); 

int ft_printf(const char *format, ...);
void run_tests(void);
int print(const char *format, ...);
// int main();

#endif
