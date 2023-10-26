/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:49:57 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/18 19:54:57 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_putnbr_base(long long nb, int base, char *minomay)
{
	int				count;
	unsigned long	numb;

	count = 0;
	if (base == 16)
	{
		numb = nb;
		if (numb >= 16)
			count += ft_putnbr_base((numb / 16), 16, minomay);
		count += ft_putchar(minomay[numb % 16]);
	}
	if (base == 10)
	{
		if (nb < 0)
		{
			nb = -nb;
			count += ft_putchar('-');
		}
		if (nb >= 10)
			count += ft_putnbr_base((nb / 10), 10, minomay);
		count += ft_putchar((nb % 10) + '0');
	}
	return (count);
}
