/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:03:44 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/13 16:24:30 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format (char const *f, va_list ap)
{
	int		count;

	count = 0;
	if (*f == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (*f == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (*f == 'p')
		return (ft_putstr("0x")
				+ ft_putnbr_base(va_arg(ap, unsigned long long), 16, MINSYMB));
	else if (*f == 'i' || *f == 'd')
		return (ft_putnbr_base(va_arg(ap, int), 10, NULL));
	else if (*f == 'x')
		return (ft_putnbr_base(va_arg(ap, int), 16, MINSYMB));
	else if (*f == 'X')
		return (ft_putnbr_base(va_arg(ap, int), 16, MAYSYMB));
	else if (*f == 'u')
		return (ft_putnbr_base(va_arg(ap, unsigned int), 10, NULL));
	return (count);
}

int	ft_printf(char const *f, ...)
{
	int			counter;
	va_list		ap;

	va_start	(ap, f);
	counter = 0;
	while (*f != '\0')
	{
		if (*f == '%')
		{
			if (*(f + 1) == '%')
			{
				counter += ft_putchar(*(f + 1));
			}
			if (*(f + 1) != '%')
				counter += ft_format(f + 1, ap);
			f++;
		}
		else
			counter += ft_putchar(*f);
		f++;
	}
	va_end (ap);
	//printf("--->%i \n", counter);
	return (counter);
}

/*int	main()
{
	char z = 'z';
	char *s = "Hola 42";
	void *p;
	int i = -10;
	int x = 1234;
	int xy = -1234;

	p = &s;
	ft_printf("Carácter único: %c", z);
	printf("\n");
	ft_printf("String: %s", s);
	printf("\n");
	ft_printf("Porcentaje; %%aaa");
	printf("\n");
	ft_printf("Direccion puntero; %p", p);
	printf("\n");
	ft_printf("Numero entero %i", i);
	printf("\n");
	ft_printf("Numero decimal %d", i);
	printf("\n");
	ft_printf("Numero MIN hex: %x", x);
	printf("\n");
	ft_printf("Numero MAY hex: %X", x);
	printf("\n");
	ft_printf("Numero unsigned: %u", xy);
	printf("\n");
	return (0);
 }*/

int main()
{
	printf("juan aqui va %s y despues esto\n", NULL);
}
