/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:35 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 09:43:44 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_s(t_arg *arg, va_list ap, int *len_buffer)
{
	t_data	data;
	char	*str;

	data.s = va_arg(ap, char *);
	str = ft_strdup(data.s);
	if (!(*len_buffer = prf_set_string(arg, &str, 's')))
		*len_buffer = 1;
	return (str);
}
