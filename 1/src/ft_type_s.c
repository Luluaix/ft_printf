/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:35 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/29 11:45:32 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		prf_set_string_test(t_arg *arg, char *data, int *len_buffer)
{

	return (0);
}

char	*ft_type_s(t_arg *arg, va_list ap, int *len_buffer)
{
	char	*str;
	t_data	data;

	FLAG &= TWO_FLAG;
	data.s = va_arg(ap, char *);
	// str = ft_strdup(data.s);
	*len_buffer = ft_strlen(data.s);
	if (*len_buffer > WIDTH)
		return (data.s);

	if (!(*len_buffer = prf_set_string_test(arg, data.s, len_buffer)))
		*len_buffer = 1;

	return (data.s);
	// if (!(*len_buffer = prf_set_string(arg, &str, 's')))
	// 	*len_buffer = 1;
	//
	// return (str);
}
