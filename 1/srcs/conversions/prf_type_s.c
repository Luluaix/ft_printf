/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:00:32 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/03 10:26:00 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_type_s(t_arg *arg, va_list ap)
{
	t_data	data;
	int 	len;

	if ((int)(data.s = va_arg(ap, char *)) == 5)
	{
		data.s = (char *)&ap[1];
		len = ft_strlen(data.s) + 1;
		RET++;
	}
	else
		len = ft_strlen(data.s);
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	data.s ? prf_set_padding(data.s, arg, len) : 0;
	data.s ? prf_fill_data(arg, data.s) : prf_fill_data(arg, "(null)");

	// if (!(*len_buffer = prf_set_string(arg, &str, 's')))
	// 	*len_buffer = 1;
	//
	// return (str);
}
