/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:51:15 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 20:59:02 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_d(t_arg *arg, va_list ap, int *len_buffer)
{
	t_data	data;
	char	*str;

	data.d = va_arg(ap, int);
	str = ft_memalloc(12);
	prf_lltoa_base(str, data.d, 10);
	*len_buffer = prf_set_unsigned(arg, &str, 's');
	return (str);
}
