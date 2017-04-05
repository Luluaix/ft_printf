/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:00:32 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/05 13:23:33 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_type_s(t_arg *arg, va_list ap)
{
	t_data	data;
	int 	len;

	data.s = va_arg(ap, char *);
	len = ft_strlen(data.s);
	if (WIDTH <= len)
	{
		prf_fill_data(arg, &data.s, len);
		return ;
	}
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	prf_set_padding(&data.s, arg, len);
	prf_fill_data(arg, &data.s, len);

	// if (!(*len_buffer = prf_set_string(arg, &str, 's')))
	// 	*len_buffer = 1;
	//
	// return (str);
}
