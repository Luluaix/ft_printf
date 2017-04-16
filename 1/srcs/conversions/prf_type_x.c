/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 22:51:08 by philippe          #+#    #+#             */
/*   Updated: 2017/04/16 20:54:24 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	prf_type_x(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[21];
	char 	*s;
	int 	len;

	ft_bzero(str, 21);
	s = str;
	TYPE == 'p' ? MOD = 0b100 : 0;
	prf_set_arg(arg, &data, ap, 'u');
	data.x == 0 ? FLAG &= ~FLAG_H : 0;
	prf_ulltoa_base(s, data.x, 16);
	len = ft_strlen(str);
	TYPE == 'p' ? FLAG |= HASHTAG : 0;
	 // equivalent a #lx;
	TYPE == 'X' ? ft_strtoupper(s) : 0;
	FLAG &= THREE_FLAG;
	FLAG |= PREFIX;
	FLAG_M ? FLAG &= FLAG_M : 0;
	FLAG_H ? FLAG |= HEXA : 0;
	PRECI < 2 ? PRECI = 2 : 0;
	prf_set_padding(&s, arg, len);
	prf_fill_data(arg, &s, len);
}
