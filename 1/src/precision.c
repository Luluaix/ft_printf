/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:30:31 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/14 09:10:13 by pdamoune         ###   ########.fr       */
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
	ft_putendl("=== Fonction PRECISION ===");
	ft_putendl(*str);
	if (**str != '.')
	{
		ft_putendl("=== Fin PRECISION 0 ===");
		return (0);
	}
	else
	{
		(*str)++;
		// while (flags(form, str))
		// 	(*str)++;
		form->precision = ft_atoi(*str);
		while (flags(form, str))
		{
			form->width = 0;
			(*str)++;
		}
		while (ft_isdigit(**str))
			(*str)++;
	}
	ft_putendl("=== Fin PRECISION 1 ===");
	return (1);
}
