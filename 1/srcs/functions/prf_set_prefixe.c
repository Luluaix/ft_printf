/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_prefixe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanie13 <fanie13@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 13:17:29 by fanie13           #+#    #+#             */
/*   Updated: 2017/04/14 19:05:26 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_set_prefixe(t_arg *arg, char **data, int len)
{
	(void)&len;
	if (!*data || !(FLAG & PREFIX))
		return ;
	FLAG_S ? prf_fill_c(arg, data, ' ') : 0;
	FLAG_P ? prf_fill_c(arg, data, '+') : 0;
	FLAG & NEGATIVE ? prf_fill_c(arg, data, '-') : 0;
	FLAG & OCTAL ? prf_fill_c(arg, data, '0') : 0;
	FLAG & HEXA ? prf_set_x(arg) : 0;
	FLAG &= ~(FLAG & PREFIX);
}
