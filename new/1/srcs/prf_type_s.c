/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:00:32 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/29 17:34:01 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/ft_printf.h"

void	prf_type_s(t_arg *arg, va_list ap)
{
	t_data	data;

	FLAG &= TWO_FLAG;
	data.s = va_arg(ap, char *);

	prf_fill_data(data.s);

	// if (!(*len_buffer = prf_set_string(arg, &str, 's')))
	// 	*len_buffer = 1;
	//
	// return (str);
}
