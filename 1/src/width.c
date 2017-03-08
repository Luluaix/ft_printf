/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:21:55 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/08 21:11:50 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** The field WIDHT
**
** Specifying a minimum field width = n
** n 		: print n characters, completed by spaces if needed.
** 0n		: print n characters, completed by 0 on the left if needed.
** *		: the next argument provide the widht.
*/

int		width(t_form *form, char **str)
{
	ft_putendl("=== Fonction width ===");
	form->width = ft_atoi(*str);
	while (ft_isdigit(**str))
		(*str)++;
	ft_putendl("=== Fonction width ===");
	return (1);
}
