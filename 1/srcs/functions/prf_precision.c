/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 07:06:59 by philippe          #+#    #+#             */
/*   Updated: 2017/04/05 10:35:16 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_precision(t_arg *arg, char **data, int len, int c)
{
	// prf_set_sign(arg, data, len);
	// // ft_putnbr_bin(FLAG), ft_putchar('\n');

	PRECI--;
	prf_fill_c(arg, data, '0');
}
