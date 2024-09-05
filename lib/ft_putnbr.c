#include "../ft_printf.h"

int ft_putnbr(int nb)
{
	int count = 0;
	if (nb == -2147483648)
	{
		count += ft_putstr("-2147483648");
	}
	else
	{
		if (nb < 0)
		{
			count += ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			count += ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
			count += ft_putchar(nb + 48);
	}
	return count;
}

int ft_putnbr_wrapper(int nb) {
	int count = 0;
	int aux_num = 0;
	if (nb > 0 && nb <= 9) {
		count += ft_putchar(nb + 48);
	} else if (nb < 0) {
		count += ft_putchar('-');
		aux_num = -nb;
		count += ft_putnbr(aux_num);
	} else {
		count += ft_putnbr(nb);
	}

	return count;
}
