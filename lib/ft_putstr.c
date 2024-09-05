#include "../ft_printf.h"

int ft_putstr(char *str)
{
	int count = 0;
	if (!str)
		return ft_putstr("(null)");
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
	return count;
}
