/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:05:26 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/14 07:50:31 by pdamoune         ###   ########.fr       */
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

int		ft_is_flags(t_form *form, int c)
{
	int		i;

	i = 0;
	// if (c == '#')
	// 	form->flags |= FLAG_HASH;
	// else if (c == '+')
	// 	form->flags |= FLAG_PLUS;
	// else if (c == '-')
	// 	form->flags |= FLAG_MIN;
	// else if (c == ' ')
	// 	form->flags |= FLAG_SP;
	// else if (c == '0')
	// 	form->flags |= FLAG_ZERO;
	// else
	// 	return (0);
	// ft_putnbr_bin(form->flags), ft_putchar('\n');
	return (1);
}

int		flags(t_form *form, char **buf)
{
	int	i;

	// ft_putendl("=== Fonction FLAGS ===");
	i = 0;
	if (**buf)
	{
		if (!ft_is_flags(form, **buf))
		{
			// ft_putendl("=== Fin FLAGS 0 ===");
			return (0);
		}
	}
	// **buf == '#' ? form->flags |= FLAG_HASH : 0;
	// **buf == '#' ? form->flags |= FLAG_HASH : 0;
	// **buf == '#' ? form->flags |= FLAG_HASH : 0;
	// **buf == '#' ? form->flags |= FLAG_HASH : 0;
	// ft_putendl(buf);
	// int i;
	//
	// ft_putendl("=== Fonction flags ===");
	// i = 0;
	// while (buf++ && *buf)
	// {
	// 	ft_putendl(buf);
	// 	ft_putendl(form->flags);
	//
	// 	while (ft_is_flags(*buf))
	// 	{
	// 		if (ft_strchr(form->flags, *buf))
	// 			buf++;
	// 		else
	// 		{
	// 			while ((form->flags)[i])
	// 				i++;
	// 			(form->flags)[i] = *buf;
	// 		}
	// 		// ft_strcpy(buf, buf + 1);
	// 	}
	// }
	// ft_putendl("=== Fonction flags ===");
	// if (*(form->flags))
	// 	return (1);
	// ft_putendl("=== Fin FLAGS 1 ===");

	return (1);
}
