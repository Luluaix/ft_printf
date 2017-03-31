/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:00:32 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/31 11:50:10 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/ft_printf.h"

void	prf_type_percent(t_arg *arg, va_list ap)
{
	t_data	data;
	int		len;

	data.prc[0] = '%';
	data.prc[1] = 0;
	len = ft_strlen(data.prc);
	// if (WIDTH <= len)
	// {
	// 	prf_fill_data(data.prc);
	// 	return ;
	// }
	// FLAG &= TWO_FLAG;
	// FLAG_M ? FLAG &= FLAG_M : 0;
	// prf_set_padding(data.prc, arg, len);
	// prf_fill_data(data.prc);
	// FLAG_M ?  : prf_set_flag_m(data.prc);

	// prf_fill_data_test(data.prc, FLAG, WIDTH, len);

	// if (!(*len_buffer = prf_set_string(arg, &str, 's')))
	// 	*len_buffer = 1;
	//
	// return (str);
}
