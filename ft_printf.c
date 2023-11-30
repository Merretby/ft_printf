/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:26:05 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/30 22:55:59 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

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
				count += ft_putchar(va_arg(args, int));
			}
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				i++;
				count += ft_putnbr(va_arg(args, long int));
			}
			else if (format[i + 1] == 'u')
			{
				i++;
				count += ft_putnbr_unsigned(va_arg(args, unsigned int));
			}
			else if (format[i + 1] == 's')
			{
				i++;
				count += ft_putstr(va_arg(args, char *));
			}
			else if (format[i + 1] == 'x' || format[i + 1] == 'X')
			{
				i++;
				count += ft_puthex(va_arg(args, unsigned int), format[i + 1]);
			}
			else if (format [i + 1] == 'p')
			{
				i++;
				ft_putstr("0x");
				count += ft_pointer (va_arg(args, unsigned long));
			}
			else if (format[i + 1] == '%')
			{
				ft_putchar('%');
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
// #include <stdio.h>
// int main()
// {
// 	int a = 123;
// 	printf("%d\n",a);
//  	ft_printf("%d\n",a );
// }
