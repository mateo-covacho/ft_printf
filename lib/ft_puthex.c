#include "../ft_printf.h"

void	ft_puthex(unsigned long n)
{

  if (n > 15)
    ft_puthex(n / 16);
  if (n % 16 < 10)
    ft_putchar(n % 16 + '0');
  else
    ft_putchar(n % 16 - 10 + 'a');
  
}
