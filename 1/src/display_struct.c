/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:48:02 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/23 06:11:10 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int		g_flag[6] = {'#', '+', '-', ' ', '0'};
char	*g_modifiers[7] = {"ll", "hh", "h", "l", "j", "z", 0};

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
			ft_putstr(g_modifiers[i]);
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

void 	display_struct(t_form *form, t_arg *arg, const char *format, va_list ap)
{
	// if (arg->type == 'd')
	// 	form->width = 0;
	// if (form->type == 's')
	// 	form->precision = 0;
	ft_putendl("======== STRUCTURE =========");
	ft_putstr("arg->flags     = "), ft_putflags(arg);
	ft_putstr("arg->width     = "), ft_putnbrel(arg->width);
	ft_putstr("arg->precision = "), ft_putnbrel(arg->precision);
	ft_putstr("arg->modifier  = "), ft_putmodifier(arg);
	ft_putstr("arg->type      = "), ft_puttype(arg);
	ft_putendl("======== STRUCTURE =========\n");
	// ft_putendl("======== RESULTATS =========");
	// ft_putstr("form->len     = "), ft_putnbrel(form->r_len);
	// ft_putstr("strlen(result)= "), ft_putnbrel(ft_strlen(form->result));
	// printf("str           = |%s|\n", format);
	// printf("string left   = |%s|\n\n", form->buffer);
	// printf("result ft_prf = |%s", form->result), printf("|\n");
	// ft_putendl("======== RESULTATS =========\n\n");


}
