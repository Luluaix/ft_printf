/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_display_pars.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:21:07 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/29 16:41:00 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int		g_flag[6] = {'#', '+', ' ', '-', '0'};
char	*g_modifier[7] = {"hh", "h", "l", "ll", "j", "z", 0};

void 	ft_putflags(t_arg *arg)
{
	int i;

	i = 0;
	ft_putnbr_bin(arg->flags);
	while (i < 5)
	{
		if (arg->flags & TEST_COMB(i))
		{
			ft_putstr(" | ");
			ft_putchar(g_flag[i]);
			ft_putstr(" | ");
		}
		i++;
	}
	ft_putchar('\n');
}

void 	ft_putmodifier(t_arg *arg)
{
	int i;

	i = 0;
	ft_putnbr_bin(arg->modifier);
	while (i < 5)
	{
		if (arg->modifier & TEST_COMB(i))
		{
			ft_putstr(" | ");
			ft_putstr(g_modifier[i]);
			ft_putstr(" | ");
		}
		i++;
	}
	ft_putchar('\n');
}

void 	ft_puttype(t_arg *arg)
{
	ft_putnbr(arg->type);
	if (arg->type)
	{
		ft_putstr("                              | ");
		ft_putchar(arg->type);
		ft_putstr(" |");
	}
		ft_putstr("\n");
}

void 	prf_display_pars(t_arg *arg, const char *format)
{
	// if (arg->type == 'd')
	// 	form->width = 0;
	// if (form->type == 's')
	// 	form->precision = 0;
	ft_putendl("\n============================== STRUCTURE ==============================\n");
	printf("format             = '%s'\n\n", format);
	printf("&format[I - 1]     = '%s'\n", &format[I - 1]);
	printf("Len format         = '%d'\n\n", I);
	write(1, "BUFFER             = '", 22), write(1, BUFFER, RET), write(1, "'\n", 2);
	printf("Len BUFFER         = '%d'\n\n", J);
	printf("RET                = '%d'\n\n", RET);

	ft_putstr("arg->flags     = "), ft_putflags(arg);
	ft_putstr("arg->width     = "), ft_putnbrel(arg->width);
	ft_putstr("arg->precision = "), ft_putnbrel(arg->precision);
	ft_putstr("arg->modifier  = "), ft_putmodifier(arg);
	ft_putstr("arg->type      = "), ft_puttype(arg);
	ft_putendl("\n=======================================================================\n");
}
