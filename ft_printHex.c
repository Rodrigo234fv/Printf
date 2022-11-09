/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printHex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:59:03 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/09 18:56:28 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexl(unsigned int n)
{
	int	count;

	count = 0;
	return (converter(n, 16, HEXL));
}

int	ft_printhexu(unsigned int n)
{
	int	count;

	count = 0;
	return (converter(n, 16, HEXU));
}
