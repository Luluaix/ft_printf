/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:51:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/23 07:04:40 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_c(t_arg *arg, va_list ap)
{
	t_data	data;
	char	*str;

	data.c = va_arg(ap, unsigned int);
	str = ft_memalloc(2);
	ft_memcpy(str, (char *)&data.c, 1);
	str[1] = 0;
	ft_set_string(arg, &str, 's');
	return (str);
}
