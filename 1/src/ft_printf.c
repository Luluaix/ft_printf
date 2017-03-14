/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/14 17:21:49 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/



int	ft_printf(const char *format, ...)
{
	va_list		 ap;
	int			i;
	int			ret;
	t_form		*form;

	i = 12;
	(void)&ap;
	if (!(form = ft_memalloc(sizeof(t_form))))
		ft_putnbrel(-1);
	while (*format && ret > 0)
	{
		if ((ret = parsing(form, "% - +hd")) < 0)
			ft_putnbrel(ret);
		break;
	}
	ft_putnbrel(ret);
	printf("| = printf = |%d\n", printf("%40d", 3));
	return (0);
}
