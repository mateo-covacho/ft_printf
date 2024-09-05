#include "../ft_printf.h"

int ft_puthex(unsigned long n)
{
	int count = 0;
	if (n > 15)
		count += ft_puthex(n / 16);
	if (n % 16 < 10)
		count += ft_putchar(n % 16 + '0');
	else
		count += ft_putchar(n % 16 - 10 + 'a');
	return count;
}
