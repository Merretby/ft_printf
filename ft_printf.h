/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moer-ret <moer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 02:46:19 by moer-ret          #+#    #+#             */
/*   Updated: 2023/11/29 05:58:01 by moer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putnbr(long int n);
void	ft_putstr(char *str);
void	ft_putnbr_unsigned(unsigned int n);

#endif