/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:48:02 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/28 19:47:03 by pdamoune         ###   ########.fr       */
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

void 	prf_display_struct(t_form *form, t_arg *arg, const char *format, va_list ap)
{
	// if (arg->type == 'd')
	// 	form->width = 0;
	// if (form->type == 's')
	// 	form->precision = 0;
	ft_putendl("\n============================== STRUCTURE ==============================\n");
	write(1, "Resultat           = '", 22);
	write(1, form->result, form->len_result);
	printf("%s'\n", form->buffer);
	printf("Len Resultat       = '%d'\n\n", form->len_result + (int)ft_strlen(form->buffer));
	printf("form->result       = '%s'\nform->len_result   = '%d'\n", form->result, form->len_result);
	printf("form->buffer       = '%s'\nform->len_buffer   = '%d'\n\n", form->buffer, form->len_buffer);
	ft_putstr("arg->flags     = "), ft_putflags(arg);
	ft_putstr("arg->width     = "), ft_putnbrel(arg->width);
	ft_putstr("arg->precision = "), ft_putnbrel(arg->precision);
	ft_putstr("arg->modifier  = "), ft_putmodifier(arg);
	ft_putstr("arg->type      = "), ft_puttype(arg);
	ft_putendl("\n=======================================================================\n");
}
