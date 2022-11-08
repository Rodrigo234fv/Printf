/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:48:40 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/08 19:48:40 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ap(char a, va_list ap)
{
	if (a == 'c')
		return (ft_printf_c(va_arg(ap, int), 1));
	else if (a == 's')
		return (ft_printf_s(va_arg(ap, char *)));
	else if (a == 'p')
		return (ft_printf_p(va_arg(ap, long int), "0123456789abcdef"));
	else if (a == 'u')
		return (ft_printf_u(va_arg(ap, unsigned int), "0123456789"));
	else if (a == 'd' || a == 'i')
		return (ft_printf_d(va_arg(ap, int), "0123456789"));
	else if 
}