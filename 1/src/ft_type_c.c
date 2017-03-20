/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:51:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 21:14:03 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		ft_type_c(t_form *form, va_list ap)
{
	t_data	data;

	data.c = va_arg(ap, unsigned int);
	ft_set_s(form, (char *)&data.c);
	return (0);
}
