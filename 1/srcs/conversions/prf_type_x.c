/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 22:51:08 by philippe          #+#    #+#             */
/*   Updated: 2017/04/15 21:01:15 by philippedamoune  ###   ########.fr       */
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
	prf_lltoa_base(s, (L)data.x, 16);
	len = ft_strlen(str);
	TYPE == 'p' ? FLAG |= HASHTAG : 0;
	TYPE == 'X' ? ft_strtoupper(s) : 0;
	FLAG &= THREE_FLAG;
	FLAG |= PREFIX;
	FLAG_M ? FLAG &= FLAG_M : 0;
	FLAG_H ? FLAG |= HEXA : 0;
	PRECI < 2 ? PRECI = 2 : 0;
	prf_set_padding(&s, arg, len);
	prf_fill_data(arg, &s, len);
}
