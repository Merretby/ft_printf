/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:26:05 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/30 04:19:34 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int count;
	int	i;
	int s;
	char *x;
	va_list args;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				i++;
				ft_putchar(va_arg(args, int));
				count++;
			}
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				i++;
				ft_putnbr(va_arg(args, long int));
				count++;
			}
			else if (format[i + 1] == 'u')
			{
				i++;
				ft_putnbr_unsigned(va_arg(args, unsigned int));
				count++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				ft_putstr(va_arg(args, char *));
				count++;
			}
			else if (format[i + 1] == 'x' || format[i + 1] == 'X')
			{
				i++;
				ft_putnbr_hex(va_arg(args, unsigned int), format[i + 1]);
				count++;
			}
			else if(format[i + 1] == '%')
			{
				ft_putchar('%');
				count++;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
#include <stdio.h>
int main()
{
	int a = 1337;
	printf("%d\n", a);
 	ft_printf("%d\n", a);
}
