/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 07:06:59 by philippe          #+#    #+#             */
/*   Updated: 2017/04/04 09:43:58 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_precision(t_arg *arg, char **data, int len)
{
	// if ()
	// 	c = '0';
	while (PRECI > len)
	{
		// ft_putendl(BUFFER);
		// ft_putnbrel(WIDTH);
		// ft_putnbrel(PRECI);
		// ft_putnbrel(len);
		prf_fill_c(arg, data, '0');
		PRECI--;
		if (PRECI == len)
			PRECI = 0;
	}
	//
	// ft_putendl(BUFFER);
	// ft_putnbrel(PRECI);
	// ft_putnbrel(WIDTH);
	// ft_putnbrel(len);
}
