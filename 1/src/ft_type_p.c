/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:26 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 09:44:31 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_p(t_arg *arg, va_list ap, int *len_buffer)
{
	t_data	data;
	char	*str;

	data.p = va_arg(ap, void*);
	str = ft_memalloc(19);
	ft_strcpy(&str[2], ft_lltoa_base((L L)data.p, 16));
	str[0] = '0';
	str[1] = 'x';
	*len_buffer = prf_set_string(arg, &str, 's');
	// ft_putnbrel(*len_buffer);
	return (str);
}
