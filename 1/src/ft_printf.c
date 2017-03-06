/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/06 19:30:53 by pdamoune         ###   ########.fr       */
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
	parsing("%++d\n");
	printf("%+d\n", i);
	// ft_putendl(format);
	return (0);
}
