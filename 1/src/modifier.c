/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifier.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:35:01 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/08 21:44:03 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** The length MODIFIER
**
** Here, "integer conversion" stands for d, i, o, u, x, or X conversion.
** 	h	: an integer of type short (d,i,o,u,x,X)
** 	l	: an integer of type long (d,i,o,u,x,X)
** 	L	: a number of
** type long double (e,E,f,g,G)
*/

char		g_modifier[4] = {"hlL"};

int		modifier(t_form *form, char **str)
{
	if (!(form->modifier[0] = *ft_strchr(g_modifier, **str)))
		return (0);
	(*str)++;
	if ((form->modifier[1] = *ft_strchr(g_modifier, **str)))
		(*str)++;
	return (1);
}
