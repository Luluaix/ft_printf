/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/09 04:07:24 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/



int	ft_printf(const char *format, ...)
{
	va_list		 ap;
	int		i;

	i = 12;
	(void)&ap;

	// parsing("bla, %+0#1-0.+d4-bbbb\n");
	printf("printf = bla, %234.#2-.0+d4-bbbb\n", 46);
	ft_putendl("parsing = bla, %+0#1-0.+b4-bbbb\n");
	// printf("bla, =%cbla\n", 5);

	// ft_putendl("bla, %++dbla\n");

	// ft_putendl(format);
	return (0);
}
