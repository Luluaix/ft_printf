/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:00:32 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/14 18:25:42 by pdamoune         ###   ########.fr       */
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
	PRECI = 0;
	prf_set_padding(&data.s, arg, len);
	prf_fill_data(arg, &data.s, len);
}
