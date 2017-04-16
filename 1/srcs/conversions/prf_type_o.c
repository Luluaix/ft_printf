/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 22:11:21 by philippe          #+#    #+#             */
/*   Updated: 2017/04/16 19:31:02 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	prf_type_o(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[21];
	char 	*s;
	int 	len;

	ft_bzero(str, 21);
	s = str;
	prf_set_arg(arg, &data, ap, 'u');
	data.x == 0 ? FLAG &= ~FLAG_H : 0;
	prf_lltoa_base(s, data.x, 8);
	len = ft_strlen(str);
	FLAG &= THREE_FLAG;
	FLAG |= PREFIX;
	FLAG_M ? FLAG &= FLAG_M : 0;
	FLAG_H ? FLAG |= OCTAL : 0;
	PRECI < 1 ? PRECI = 1 : 0;
	prf_set_padding(&s, arg, len);
	prf_fill_data(arg, &s, len);
}
