#include "../ft_printf.h"

/*remember to not handle negative numeb ▏ ▏ export DEV_ENVIRONMENT="C"rs instead
 * let them print the corresponding value in unsigned int */
int ft_unsig_nbr(int n)
{
	int count = 0;
	unsigned int nb = n;
	if (nb >= 10)
	{
		count += ft_unsig_nbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		count += ft_putchar(nb + 48);
	return count;
}
