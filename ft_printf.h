/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libpr.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:10:53 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/11 20:06:03 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPR_H
# define LIBPR_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

#define MAYSYMB "0123456789ABCDEF"
#define MINSYMB "0123456789abcdef"

int	ft_putstr(char *s);
int	ft_strlen(const char *str);
int	ft_putchar_fd(char c, int fd);
int	ft_printf(char const *, ...);
int	ft_putnbr_base(long long nb, int base, char *symbols);

#endif
