/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:26 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 10:37:03 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_p(t_arg *arg, va_list ap, int *len_buffer)
{
	t_data	data;
	char	tmp[19];
	char	*str;

	data.p = va_arg(ap, void*);
	ft_bzero(tmp, 19);
	prf_lltoa_base(&(tmp[2]), (L L)data.p, 16);
	tmp[0] = '0';
	tmp[1] = 'x';
	str = ft_strdup(tmp);
	*len_buffer = prf_set_string(arg, &str, 's');
	// ft_putnbrel(*len_buffer);
	return (str);
}
