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

int	ft_print_ap(va_list ap, const char a)
{
	if (a == 'c')
		return (ft_printchar(va_arg(ap, int)));
	else if (a == 's')
		return (ft_printstr(va_arg(ap, char *)));
	else if (a == 'p')
		return (ft_print_ptr(va_arg(ap, unsigned long long )));
	else if (a == 'u') 
		return (ft_print_unsigned(va_arg(ap, unsigned int)));
	else if (a == 'd' || a == 'i') // ja ta
		return (ft_printnbr(va_arg(ap, int)));
	else if (a == 'x') // ja ta
		return (ft_printHexL(va_arg(ap, unsigned int)));
	else if (a == 'X') // ja ta 
		return (ft_printHexU(va_arg(ap, unsigned int)));
	else if (a == '%') // ja ta
		return (ft_printpercent());
}

