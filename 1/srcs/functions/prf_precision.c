/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 07:06:59 by philippe          #+#    #+#             */
/*   Updated: 2017/04/16 16:00:56 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_preci_s(t_arg *arg, char **data, int len, int c)
{
	if (PRECI == WIDTH)
	{
		prf_set_prefixe(arg, data, len);
		while (PRECI-- > len && !FLAG_M)
		{
			prf_fill_c(arg, data, c);
		}
	}
	else
	{
		prf_fill_c(arg, data, c);
		return ;
	}
	PRECI = -1;
}

void 	prf_precision(t_arg *arg, char **data, int len, int c)
{
	if (PRECI == -1)
		prf_fill_c(arg, data, c);
	else
		prf_preci_s(arg, data, len, c);
}
