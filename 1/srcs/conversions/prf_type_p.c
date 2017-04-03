/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 20:53:32 by philippe          #+#    #+#             */
/*   Updated: 2017/04/03 16:17:58 by fanie13          ###   ########.fr       */
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
	int 	len;

	ft_bzero(str, 20);
	data.p = va_arg(ap, void *);
	prf_set_x(str, (L)data.p, 16);
	len = ft_strlen(str);
	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	prf_set_padding(str, arg, len);
	prf_fill_data(arg, str);
}
