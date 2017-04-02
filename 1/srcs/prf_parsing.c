/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:06:21 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/29 14:54:56 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		g_flags[6] = {'#', '+', ' ', '-', '0'};
char	*g_modifiers[7] = {"hh", "h", "l", "ll", "j", "z", 0};
char	g_type[16] = {"diouxXfeEgGcsp%"};

int		ft_flags(t_arg *arg, const char *format)
{
	int i;

	i = 0;
	while (i < 5 && format[I])
	{
		i = 0;
		while (i < 5)
		{
			if (g_flags[i] == format[I])
			{
				arg->flags |= TEST_COMB(i);
				return (1);
			}
			i++;
		}
		I++;
	}
	I--;


	return (0);
}

int		ft_modifier(t_arg *arg, const char *format)
{
	int i;

	i = 0;
	while (i < 6 && format[I])
	{
		if (!ft_strncmp(g_modifiers[i], &format[I], ft_strlen(g_modifiers[i])))
		{
			arg->modifier |= TEST_COMB(i);
			I += ft_strlen(g_modifiers[i]) - 1;
			return (1);
		}
		i++;
	}
	if (!ft_strchr(g_type, format[I]) && !(arg->type = 0))
		return (0);
	arg->type = format[I];
	I++;
	return (0);
}

int		ft_precision(t_arg *arg, const char *format)
{
	I++;
	if (format[I] != '0' && ft_isdigit(format[I]))
		arg->precision = ABS(ft_atoi(&format[I]));
	while (ft_flags(arg, format))
	{
		arg->width = 0;
		ft_precision(arg, format);
		I++;
	}
	while (ft_isdigit(format[I]))
		I++;
	I--;
	return (1);
}

int		ft_width(t_arg *arg, const char *format)
{
	if (!ft_isdigit(format[I]))
	{
		if (format[I] != '.')
			return (ft_modifier(arg, format));
		return (ft_precision(arg, format));
	}
	arg->width = ft_atoi(&format[I]);
	while (ft_isdigit(format[I]))
		I++;
	I--;
	return (1);
}

int		prf_parsing(t_arg *arg, const char *format)
{
	I++;
	while (format[I])
	{
		if (!ft_flags(arg, format) && !ft_width(arg, format))
			return (1);
		I++;
	}
	return (0);
}
