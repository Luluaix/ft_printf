/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 20:53:32 by philippe          #+#    #+#             */
/*   Updated: 2017/04/14 19:08:45 by pdamoune         ###   ########.fr       */
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
	data.p = va_arg(ap, void *);
	prf_lltoa_base(str, (L)data.p, 16);
	len = ft_strlen(str);
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	FLAG |= PREFIX;
	FLAG |= HEXA;
	prf_set_padding(&s, arg, len);
	prf_fill_data(arg, &s, len);
}
