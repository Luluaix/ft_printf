/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 21:57:12 by philippe          #+#    #+#             */
/*   Updated: 2017/04/16 19:36:27 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_type_u(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[21];
	char	*ptr;
	int 	len;

	ptr = str;
	ft_bzero(str, 21);
	prf_set_arg(arg, &data, ap, 'u');
	prf_lltoa_base(str, data.d, 10);
	FLAG &= FOUR_FLAG;
	WIDTH < PRECI ? WIDTH = PRECI : 0;
	len = ft_strlen(ptr);
	prf_set_padding((char **)&ptr, arg, len);
}
