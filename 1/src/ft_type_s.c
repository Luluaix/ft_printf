/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:35 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/21 20:30:53 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

int		ft_type_s(t_form *form, va_list ap)
{
	t_data	data;
	char	*str;

	data.s = va_arg(ap, char *);
	str = ft_strdup(data.s);
	ft_set_string(form, str, 's');
	return (0);
}
