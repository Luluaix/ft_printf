/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/14 13:26:27 by pdamoune         ###   ########.fr       */
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
	// ft_putnbr_bin(5);
	parsing("0100 .52h-dbbbb\n");
	// printf("printf = bla, %0100. +-5 100lldb2-.0+d4-bbbb\n", 46);
	// ft_putendl("string = bla, %234.b2-.0+d4-bbbb\n");
	// printf("bla, =%cbla\n", 5);

	// ft_putendl("bla, %++dbla\n");

	// ft_putendl(format);
	return (0);
}
