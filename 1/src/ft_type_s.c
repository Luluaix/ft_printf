/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:35 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 12:09:17 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		ft_type_s(t_form *form, va_list ap)
{
	t_data		data;

	data.s = va_arg(ap, void*);
	form->result = ft_strjoin(form->result, "0x");
	form->result = ft_strjoin(form->result,	ft_ulltoa_base((L L)data.s, 16));
	return (0);
}
