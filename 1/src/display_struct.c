/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:48:02 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/17 16:07:45 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int		g_flag[6] = {'#', '+', '-', ' ', '0'};
char	*g_modifiers[7] = {"ll", "hh", "h", "l", "j", "z", 0};

void 	ft_putflags(t_form *form)
{
	int i;

	i = 0;
	ft_putnbr_bin(form->flags);
	while (i < 5)
	{
		if (form->flags & TEST_COMB(i))
		{
			ft_putstr(" | ");
			ft_putchar(g_flag[i]);
			ft_putstr(" | ");
		}
		i++;
	}
	ft_putchar('\n');
}

void 	ft_putmodifier(t_form *form)
{
	int i;

	i = 0;
	ft_putnbr_bin(form->modifier);
	while (i < 5)
	{
		if (form->modifier & TEST_COMB(i))
		{
			ft_putstr(" | ");
			ft_putstr(g_modifiers[i]);
			ft_putstr(" | ");
		}
		i++;
	}
	ft_putchar('\n');
}

void 	ft_puttype(t_form *form)
{
	ft_putnbr(form->type);
	if (form->type)
	{
		ft_putstr("                              | ");
		ft_putchar(form->type);
		ft_putstr(" |");
	}
		ft_putstr("\n");
}

void 	display_struct(t_form *form,const char *format, va_list ap)
{
	// int j;

	if (form->type == 'd')
		form->width = 0;
	if (form->type == 's')
		form->precision = 0;
	ft_putendl("======== STRUCTURE =========");
	ft_putstr("form->flags     = "), ft_putflags(form);
	ft_putstr("form->width     = "), ft_putnbrel(form->width);
	ft_putstr("form->precision = "), ft_putnbrel(form->precision);
	ft_putstr("form->modifier  = "), ft_putmodifier(form);
	ft_putstr("form->type      = "), ft_puttype(form);
	ft_putendl("======== STRUCTURE =========\n");
	ft_putendl("======== RESULTATS =========");
	printf("str           = |%s|\n", format);
	printf("string left   = |%s|\n\n", form->buffer);
	printf("result ft_prf = |%s", form->result), printf("|\n");
	ft_putendl("======== RESULTATS =========\n\n");


}
