/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_padding.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:14:32 by philippe          #+#    #+#             */
/*   Updated: 2017/04/05 19:08:54 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	prf_set_padding(char **data, t_arg *arg, int len)
{
	int c;
	int count = 0;

	c = ' ';
	FLAG_Z ? c = '0' : 0;
	if (FLAG_M)
	{
		prf_set_prefixe(arg, data, len);
 		while (PRECI > len && count++ < PRECI - len)
		{
			prf_precision(arg, data, len, '0');
		}
		PRECI = 0;
		prf_fill_data(arg, data, len);
		// ft_putstr("BUFFER = |"), ft_putstr(BUFFER), ft_putendl("|");
		// ft_putstr("*data  = |"), ft_putstr(*data), ft_putendl("|");
		// ft_putstr("WIDTH  = |"), ft_putnbr(WIDTH), ft_putendl("|");
		// ft_putstr("PRECI  = |"), ft_putnbr(PRECI), ft_putendl("|");
		// ft_putstr("len    = |"), ft_putnbr(len), ft_putendl("|");
		// ft_putstr("c      = |"), ft_putchar(c), ft_putendl("|");
		while (WIDTH - len > 0)
			prf_precision(arg, data, len, ' ');
		return ;
	}
	if (!FLAG_M)
		if (!FLAG_Z)
			while (WIDTH - PRECI > 0)
			{
				prf_precision(arg, data, len, c);
				// prf_fill_c(arg, data, c);
			}
	prf_set_prefixe(arg, data, len);
	while (WIDTH - len > 0)
		prf_precision(arg, data, len, c);
	prf_fill_data(arg, data, len);
}
