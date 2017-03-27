/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:51:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 09:48:00 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_c(t_arg *arg, va_list ap, int *len_buffer)
{
	t_data	data;
	char	*str;

	data.c = va_arg(ap, unsigned int);
	str = ft_memalloc(2);
	str[0] = data.c;
	str[1] = 0;
	if (!(*len_buffer = prf_set_string(arg, &str, 's')))
		*len_buffer = 1;
	return (str);
}
