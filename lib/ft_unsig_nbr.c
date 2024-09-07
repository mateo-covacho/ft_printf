/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsig_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateocovachov2 <mateocovachov2@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:46:53 by mateocovachov2    #+#    #+#             */
/*   Updated: 2024/09/07 15:48:17 by mateocovachov2   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

/*remember to not handle negative numeb ▏ ▏ export DEV_ENVIRONMENT="C"rs instead
 * let them print	the corresponding value in unsigned int	*/
int	ft_unsig_nbr(int n)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = n;
	if (nb >= 10)
	{
		count += ft_unsig_nbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		count += ft_putchar(nb + 48);
	return (count);
}
