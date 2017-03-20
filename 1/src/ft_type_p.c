/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:26 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 21:09:34 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		ft_type_p(t_form *form, va_list ap)
{
	t_data		data;
	char		*tmp;

	data.p = va_arg(ap, void*);
	tmp = ft_lltoa_base((L L)data.p, 16);
	ft_set_s(form, "0x");
	ft_set_s(form, tmp);
	free (tmp);
	return (0);
}
