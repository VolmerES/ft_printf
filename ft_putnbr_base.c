/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:49:57 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/11 16:53:59 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAYSYMB "0123456789ABCDEF"
#define MINSYMB "0123456789abcdef"

int	ft_putchar_fd(char c, int fd);

int	ft_putnbr_base(long long nb, int base, const char *symbols)
{
	const char *MINOMAY;
	int count;

	count = 0;
	MINOMAY = symbols;
	if (base == 16)
	{
		if (nb >= 16)
			count += ft_putnbr_base((nb /16), 16, MINOMAY);
		count += ft_putchar_fd(MINOMAY[nb % 16], 1);
	}
	if (base == 10)
	{
		if (nb < 0)
		{
			nb = -nb;
			count += ft_putchar_fd('-', 1);
		}
		if (nb >= 10)
			 count += ft_putnbr_base((nb /10), 10, MINOMAY);
		count += ft_putchar_fd((nb % 10) + '0', 1);
	}
	return (count);
}
