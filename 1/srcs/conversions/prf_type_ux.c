/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_ux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 22:58:06 by philippe          #+#    #+#             */
/*   Updated: 2017/04/02 23:10:05 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_type_u(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[12];
	char	*s;
	int 	len;

	ft_bzero(str, 12);
	s = str;
	data.u = va_arg(ap, unsigned int);
	prf_lltoa_base(str, data.u, 10);
	len = ft_strlen(str);
	FLAG &= TWO_FLAG;
	prf_set_padding(&s, arg, len);
	prf_fill_data(arg, &s);
}
