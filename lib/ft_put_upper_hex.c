#include "../ft_printf.h"

int ft_put_upper_hex(unsigned long n)
{
    int count = 0;
    if (n > 15)
        count += ft_put_upper_hex(n / 16);
    if (n % 16 < 10)
        count += ft_putchar(n % 16 + '0');
    else
        count += ft_putchar(n % 16 - 10 + 'A');
    return count;
}
