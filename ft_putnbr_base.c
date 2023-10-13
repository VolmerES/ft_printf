/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:49:57 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/11 20:02:23 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_putnbr_base(long long nb, int base, char *minomay)
{
	int count;

	count = 0;
	if (base == 16)
	{
		if (nb >= 16)
			count += ft_putnbr_base((nb /16), 16, minomay);
		count += ft_putchar_fd(minomay[nb % 16], 1);
	}
	if (base == 10)
	{
		if (nb < 0)
		{
			nb = -nb;
			count += ft_putchar_fd('-', 1);
		}
		if (nb >= 10)
			 count += ft_putnbr_base((nb /10), 10, minomay);
		count += ft_putchar_fd((nb % 10) + '0', 1);
	}
	return (count);
}
