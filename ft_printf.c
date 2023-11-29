/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 05:26:05 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/29 06:06:47 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int count;
	int	i;
	int s;
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
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			s = va_arg(args, int);
			ft_putchar(s);
			break;
		}
			
		format++;
	}
	//va_end(format);
	return (count);
}
