/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 20:53:32 by philippe          #+#    #+#             */
/*   Updated: 2017/04/03 10:29:14 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

/*
** FLAG precision a mette a jour
*/

void	prf_type_p(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[20];
	char 	*s;
	int 	len;

	ft_bzero(str, 20);
	s = str;
	ft_putnbrel(va_arg(ap, void *));
	// (int)(data.p = va_arg(ap, void *)) != 5 ? prf_set_x(str, (L)data.p, 16) :
	// prf_set_x(str, (L)&ap[1], 16);
	len = ft_strlen(str);
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	prf_set_padding(s, arg, len);
	prf_fill_data(arg, s);
}
