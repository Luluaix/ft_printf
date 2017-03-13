/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifier.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:35:01 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/13 17:13:18 by pdamoune         ###   ########.fr       */
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

int		ft_is_modifier(t_form *form, char *c)
{
	int		i;

	i = 0;
	ft_putendl("=== Fonction MODIFIER ===");
	if (*c == 'h' && *(c + 1) == 'h')
		form->modifier |= MODIF_HH;
	else if (*c == 'h' && *(c - 1) != 'h')
		form->modifier |= MODIF_H;
	else if (*c == 'l' && *(c + 1) == 'l')
		form->modifier |= MODIF_LL;
	else if (*c == 'l' && *(c - 1) != 'l')
		form->modifier |= MODIF_L;
	else if (*c == 'j')
		form->modifier |= MODIF_J;
	else if (*c == 'z')
		form->modifier |= MODIF_Z;
	else
		return (0);
	// ft_putnbr_bin(form->flags), ft_putchar('\n');
	return (1);
}

int		modifier(t_form *form, char **str)
{
	int	i;

	// ft_putendl("=== Fonction FLAGS ===");
	i = 0;
	if (**str)
	{
		if (!ft_is_modifier(form, *str))
		{
			// ft_putendl("=== Fin FLAGS 0 ===");
			return (0);
		}
	}
	return (1);
}
