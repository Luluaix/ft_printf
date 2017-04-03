/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 22:51:08 by philippe          #+#    #+#             */
/*   Updated: 2017/04/03 16:04:29 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	prf_type_x(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[12];
	int 	len;

	ft_bzero(str, 12);
	data.x = va_arg(ap, unsigned int);
	FLAG_H ? prf_set_x(str, (L)data.x, 16) : prf_lltoa_base(str, (L)data.x, 16);
	TYPE == 'X' ? ft_strtoupper(str) : 0;
	len = ft_strlen(str);
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	prf_set_padding(str, arg, len);
	prf_fill_data(arg, str);
}
