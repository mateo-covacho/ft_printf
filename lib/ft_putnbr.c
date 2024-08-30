#include "../ft_printf.h"

void	ft_putnbr(int nb)
{
  if (nb < 0)
  {
    ft_putchar('-');
    nb = -nb;
  }
  if (nb >= 10)
  {
    ft_putnbr(nb / 10);
    nb = nb % 10;
  }
  if (nb < 10)
    ft_putchar(nb + 48);
}
