/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:59:52 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/30 01:22:39 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned int nb, const char format)
{
	if (nb < 16)
	{
		if(nb <= 9)
			ft_putchar(nb + '0');
		else
		{
			if (format == 'x')
				ft_putchar(nb - 10 + 'a');
			else if (format == 'X')
				ft_putchar(nb - 10 + 'A');
		}
	}
	else if (nb >= 16)
	{
		ft_putnbr_hex(nb / 16, format);
		ft_putnbr_hex(nb % 16, format);
	}
}
