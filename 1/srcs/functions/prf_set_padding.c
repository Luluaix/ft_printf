/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_padding.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:14:32 by philippe          #+#    #+#             */
/*   Updated: 2017/04/15 18:40:00 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int 	prf_flag_minus(char **data, t_arg *arg, int len)
{
	int count = 0;

	prf_set_prefixe(arg, data, len);
	while (PRECI > len && count++ < PRECI - len)
	{
		prf_precision(arg, data, len, '0');
	}
	PRECI = 0;
	prf_fill_data(arg, data, len);
	while (WIDTH - len > 0)
		prf_precision(arg, data, len, ' ');
	return (1);
}

void	prf_set_padding(char **data, t_arg *arg, int len)
{
	int c;

	c = ' ';
	FLAG_Z ? c = '0' : 0;
	if (FLAG_M)
	{
		prf_flag_minus(data, arg, len);
		return ;
	}
	if (!FLAG_M)
		if (!FLAG_Z)
			while (WIDTH - PRECI - len > 0)
			{
				prf_precision(arg, data, len, c);
			}

	prf_set_prefixe(arg, data, len);
	while (WIDTH - len > 0)
		prf_precision(arg, data, len, c);
	prf_fill_data(arg, data, len);
}
