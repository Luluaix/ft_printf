/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:26 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 11:57:52 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		ft_type_p(t_form *form, va_list ap)
{
	t_data		data;

	data.p = va_arg(ap, void*);
	form->result = ft_strjoin(form->result, "0x");
	form->result = ft_strjoin(form->result,	ft_ulltoa_base((L L)data.p, 16));
	return (0);
}
