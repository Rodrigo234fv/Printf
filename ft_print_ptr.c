/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:52:15 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/09 15:52:15 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 0x

#include "ft_printf.h"

int	ft_print_ptr(unsigned long n)
{
	int	count;

	if (!n)
	{
	write (1, "(nil)", 5);
	return (5);
	}
	write (1, "0x", 2);
	count = converter(n, 16, HEXL);
	return (count + 2);
}
