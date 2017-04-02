/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 12:27:45 by philippe          #+#    #+#             */
/*   Updated: 2017/04/02 20:48:29 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_type_d(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[12];
	char	*s;
	int 	len;

	ft_bzero(str, 12);
	s = str;
	data.d = va_arg(ap, int);
	prf_lltoa_base(str, data.d, 10);
	// ft_putendl(str);
	len = ft_strlen(str);
	FLAG &= FOUR_FLAG;
	FLAG |= SIGN_FLAG;
	prf_set_padding(&s, arg, len);
	prf_fill_data(arg, &s);

	// if (!(*len_buffer = prf_set_string(arg, &str, 's')))
	// 	*len_buffer = 1;
	//
	// return (str);
}
