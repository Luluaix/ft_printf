/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:51:15 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 21:19:44 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		ft_type_d(t_form *form, va_list ap)
{
	t_data	data;

	data.d = va_arg(ap, int);
	ft_set_s(form, ft_lltoa_base(data.d, 10));
	return (0);
}
