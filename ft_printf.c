/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:03:44 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/09 21:55:23 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
void	ft_putstr_fd(char*s);

int	ft_write (char const *f, va_list ap)
{
	int		count;
	char 	o;

	count = 0;
	if (*f == 'c')
	{
		o = va_arg(ap, int);
		count += write (1, &o, 1);
	}
	else if (*f == 's')
	{
		ft_putstr_fd(va_arg(ap, char *));
	}
	return (count);
}

int	ft_printf(char const *f, ...)
{
	va_list		ap;
	va_start	(ap, f);
	int			counter;

	counter = 0;
	while (*f != '\0')
	{
		if (*f == '%')
		{
			if (*f + 1 != '%')
			ft_write(f + 1, ap);
			else
				write(1, "%", 1);
		}
		f++;
	}
	va_end (ap);
	return (counter);
}

int	main()
{
	char z = 'z';
	char *s = "Hola 42";
	ft_printf("Carácter único: %c \n", z);
	printf("\n");
	ft_printf("String: %s \n", s);
	printf("\n");
	ft_printf("Porcentaje; %%");
	printf("\n");
	return (0);
}
