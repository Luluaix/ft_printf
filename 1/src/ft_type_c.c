/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:51:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/21 21:35:06 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		ft_type_c(t_form *form, va_list ap)
{
	t_data	data;
	char	*str;

	data.c = va_arg(ap, unsigned int);
	str = ft_strsub((char *)&data.c, 0, 1);
	ft_set_string(form, str, 's');
	return (0);
}
