/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 22:11:21 by philippe          #+#    #+#             */
/*   Updated: 2017/04/03 15:53:51 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	prf_type_o(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[14];
	int 	len;

	ft_bzero(str, 14);
	data.o = va_arg(ap, unsigned int);
	FLAG_H ? prf_set_x(str, (L)data.o, 8) : prf_lltoa_base(str, (L)data.o, 8);
	len = ft_strlen(str);
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	prf_set_padding(str, arg, len);
	prf_fill_data(arg, str);
}
