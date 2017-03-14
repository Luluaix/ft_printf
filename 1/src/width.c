/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:21:55 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/14 09:00:41 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** The field WIDHT
**
** Specifying a minimum field width = n
** n 		: print n characters, completed by spaces if needed.
** 0n		: print n characters, completed by 0 on the left if needed.
** *		: the next argument provide the width.
*/

int		width(t_form *form, char **str)
{
	if (!ft_isdigit(**str))
		return (0);
	form->width = ft_atoi(*str);
	while (ft_isdigit(**str))
		(*str)++;
	(*str)--;
	ft_putendl(*str);
	return (1);
}
