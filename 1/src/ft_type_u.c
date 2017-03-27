/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:43 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 12:02:08 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_u(t_arg *arg, va_list ap, int *len_buffer)
{
	t_data	data;
	char	*str;

	data.u = va_arg(ap, unsigned int);
	str = ft_memalloc(11);
	prf_lltoa_base(str, (U)data.u, 10);
	*len_buffer = prf_set_unsigned(arg, &str, 's');
	return (str);
}
