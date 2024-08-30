#include "../ft_printf.h"

void	ft_put_upper_hex(unsigned long n)
{
  if (n > 15)
    ft_put_upper_hex(n / 16);
  if (n % 16 < 10)
    ft_putchar(n % 16 + '0');
  else
    ft_putchar(n % 16 - 10 + 'A');
  
}
