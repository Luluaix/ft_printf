/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:51:15 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/21 21:35:14 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		ft_type_d(t_form *form, va_list ap)
{
	t_data	data;

	data.d = va_arg(ap, int);
	ft_set_string(form, ft_lltoa_base(data.d, 10), 'd');
	return (0);
}
