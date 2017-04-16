/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 17:55:25 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/16 18:24:34 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_set_arg_unsigned(t_arg *arg, t_data *data, va_list ap)
{
	!MOD ? data->x = (unsigned int)va_arg(ap, unsigned int) : 0;
	MOD_LL ? MOD = MOD_LL : 0;
	MOD_LL ? data->x = (unsigned long long)va_arg(ap, unsigned long long) : 0;
	MOD_L ? MOD = MOD_L : 0;
	MOD_L ? data->x = (unsigned long)va_arg(ap, unsigned long) : 0;
	MOD_H ? MOD = MOD_H : 0;
	MOD_H ? data->x = (unsigned short)va_arg(ap, unsigned int) : 0;
	MOD_HH ? MOD = MOD_HH : 0;
	MOD_HH ? data->x = (unsigned char)va_arg(ap, unsigned int) : 0;
}

void 	prf_set_arg_signed(t_arg *arg, t_data *data, va_list ap)
{
	!MOD ? data->d = (int)va_arg(ap, int) : 0;
	MOD_LL ? MOD = MOD_LL : 0;
	MOD_LL ? data->d = (long long)va_arg(ap, long long) : 0;
	MOD_L ? MOD = MOD_L : 0;
	MOD_L ? data->d = (long)va_arg(ap, long) : 0;
	MOD_H ? MOD = MOD_H : 0;
	MOD_H ? data->d = (short)va_arg(ap, int) : 0;
	MOD_HH ? MOD = MOD_HH : 0;
	MOD_HH ? data->d = (char)va_arg(ap, int) : 0;
}

void 	prf_set_arg(t_arg *arg, t_data *data, va_list ap, int c)
{
	c == 's' ? prf_set_arg_signed(arg, data, ap) : 0;
	c == 'u' ? prf_set_arg_unsigned(arg, data, ap) : 0;
}
