/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:21:55 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/06 19:16:50 by pdamoune         ###   ########.fr       */
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

int		width(const char *str)
{
	if (!ft_isdigit(*str))
		return (0);
	return (1000);
}
