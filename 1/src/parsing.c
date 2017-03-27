/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:12 by philippe          #+#    #+#             */
/*   Updated: 2017/03/27 14:54:57 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		g_flags[6] = {'#', '+', ' ', '-', '0'};
char	*g_modifier[7] = {"ll", "hh", "h", "l", "j", "z", 0};
char	g_type[16] = {"diouxXfeEgGcsp%"};

int		ft_flags(t_arg *arg, char **str)
{
	int i;

	i = 0;
	while (i < 5 && **str)
	{
		i = 0;
		while (i < 5)
		{
			if (g_flags[i] == **str)
			{
				arg->flags |= TEST_COMB(i);
				return (1);
			}
			i++;
		}
		(*str)++;
	}
	(*str)--;


	return (0);
}

int		ft_modifier(t_arg *arg, char **str)
{
	int i;

	i = 0;
	while (i < 6 && **str)
	{
		if (!ft_strncmp(g_modifier[i], *str, ft_strlen(g_modifier[i])))
		{
			arg->modifier |= TEST_COMB(i);
			*str += ft_strlen(g_modifier[i]) - 1;
			return (1);
		}
		i++;
	}
	if (!ft_strchr(g_type, **str) && !(arg->type = 0))
		return (0);
	arg->type = **str;
	(*str)++;
	return (0);
}

int		ft_precision(t_arg *arg, char **str)
{
	(*str)++;
	if (**str != '0' && ft_isdigit(**str))
		arg->precision = ABS(ft_atoi(*str));
	while (ft_flags(arg, str))
	{
		arg->width = 0;
		ft_precision(arg, str);
		(*str)++;
	}
	while (ft_isdigit(**str))
		(*str)++;
	(*str)--;
	return (1);
}

int		ft_width(t_arg *arg, char **str)
{
	if (!ft_isdigit(**str))
	{
		if (**str != '.')
			return (ft_modifier(arg, str));
		return (ft_precision(arg, str));
	}
	arg->width = ft_atoi(*str);
	while (ft_isdigit(**str))
		(*str)++;
	(*str)--;
	return (1);
}

int		prf_parsing(t_arg *arg, char **buffer)
{
	int i;

	i = 0;
	while (*buffer)
	{
		if (!ft_flags(arg, buffer) && !ft_width(arg, buffer))
			return (1);
		(*buffer)++;
	}
	return (0);
}
