/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:26 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/23 06:47:52 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_p(t_arg *arg, va_list ap)
{
	t_data		data;
	char		*str;
	int			len;

	data.p = va_arg(ap, void*);
	str = ft_lltoa_base((L L)data.p, 16);
	len = ft_strlen(str);
	str = ft_memrealloc(str, len, len + 3);
	ft_memmove(&str[2], str, len);
	str[0] = '0';
	str[1] = 'x';
	ft_set_string(arg, &str, 's');
	return (str);
}
