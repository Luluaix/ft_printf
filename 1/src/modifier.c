/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifier.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:35:01 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/06 19:16:46 by pdamoune         ###   ########.fr       */
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

int		ft_is_modifier(int c)
{
	int		i;

	i = 0;
	while (g_modifier[i])
		if (c == g_modifier[i++])
			return (1);
	return (0);
}

int		modifier(const char *str)
{
	if (!ft_is_modifier(*str))
		return (0);
	return (10);
}
