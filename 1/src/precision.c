/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:30:31 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/08 21:28:09 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** The PRECISION '.'
**
** nothing	:	d, i, o, u, x : 1 number
** .0		:	d, i, o, u, x : default precision.
** 			e, E, f :	no decimal '.'
** .n		:	max n characters
** *		:	the next arguments contains the precision
*/

int		precision(t_form *form, char **str)
{
	if (**str != '.')
		form->precision = 0;
	else
	{
		(*str)++;
		form->precision = ft_atoi(*str);
		while (ft_isdigit(**str))
			(*str)++;
	}
	return (1);
}
