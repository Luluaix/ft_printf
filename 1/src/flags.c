/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:05:26 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/06 19:42:35 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** The FLAG characters
**
** nothing		Default, right justification complited on the left by spaces.
** -			Left justification, complited on the right by spaces.
** +			Results begin with '-' or '+'.
** space		The sign is only for negative result.
** #			Alternative form, if the conversion is :
**    c,s,d,i,u 	: no effect.
**    o 			: a 0 will be placed before the value.
**    x, X 			: 0x or 0X will be placed before the value.
**    e, E, f 		: the decimal '.' will always be displayed.
**    g, G 			: Same as e or E, but with the '0' on the right.
*/

char	g_flags[5] = {"#+- "};

int		ft_is_flags(int c)
{
	int		i;

	i = 0;
	while (g_flags[i])
		if (c == g_flags[i++])
			return (1);
	return (0);
}

int		flags(char *str)
{
	
	return (ft_is_flags(*str));
}
