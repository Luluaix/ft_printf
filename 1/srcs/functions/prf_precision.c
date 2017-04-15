/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 07:06:59 by philippe          #+#    #+#             */
/*   Updated: 2017/04/15 20:09:07 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_precision(t_arg *arg, char **data, int len, int c)
{
	// prf_set_sign(arg, data, len);
	// ft_putnbr_bin(FLAG), ft_putchar('\n');
	// PRECI--;
	// ft_putstr("c      = |"), ft_putchar(c), ft_putendl("|");
	if (PRECI == WIDTH)
	{
		prf_set_prefixe(arg, data, len);
		while (PRECI-- > len)
		{
			prf_fill_c(arg, data, '0');
		}
	}
	else
	{
		prf_fill_c(arg, data, c);
	}
	// ft_putstr("BUFFER = |"), ft_putstr(BUFFER), ft_putendl("|");
	// ft_putstr("*data  = |"), ft_putstr(*data), ft_putendl("|");
	// ft_putstr("WIDTH  = |"), ft_putnbr(WIDTH), ft_putendl("|");
	// ft_putstr("PRECI  = |"), ft_putnbr(PRECI), ft_putendl("|");
	// ft_putstr("len    = |"), ft_putnbr(len), ft_putendl("|");
}
