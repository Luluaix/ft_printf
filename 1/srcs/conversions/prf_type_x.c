/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 22:51:08 by philippe          #+#    #+#             */
/*   Updated: 2017/04/02 23:15:14 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	prf_type_x(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[20];
	char 	*s;
	int 	len;

	ft_bzero(str, 20);
	s = str;
	data.x = va_arg(ap, unsigned int);
	FLAG_H ? prf_set_x(s, (L)data.x, 16) : prf_lltoa_base(s, (L)data.x, 16);
	TYPE == 'X' ? ft_strtoupper(s) : 0;
	len = ft_strlen(str);
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	prf_set_padding(&s, arg, len);
	prf_fill_data(arg, &s);
}
