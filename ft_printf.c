/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:13:06 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/07 21:13:06 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Falta Variadic function para a parte do %
So assim da para fzr o printf */

int	ft_printf(const char *s)
{
	int		i;
	int		print;
	i = 0;
	print = 0;

	while (s[i])
	{
		if (s[i - 1] == '%')
		{
			// use arg
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			print++;
		}
		i++;
	}
	return (print);
}