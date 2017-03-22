/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:12 by philippe          #+#    #+#             */
/*   Updated: 2017/03/20 19:36:46 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		g_flags[6] = {'#', '+', ' ', '-', '0'};
char	*g_modifier[7] = {"ll", "hh", "h", "l", "j", "z", 0};
char	g_type[16] = {"diouxXfeEgGcsp%"};

int		ft_flags(t_form *form, char **str)
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
				form->flags |= TEST_COMB(i);
				return (1);
			}
			i++;
		}
		(*str)++;
	}
	(*str)--;
	return (0);
}

int		ft_modifier(t_form *form, char **str)
{
	int i;

	i = 0;
	while (i < 6 && **str)
	{
		if (!ft_strncmp(g_modifier[i], *str, ft_strlen(g_modifier[i])))
		{
			form->modifier |= TEST_COMB(i);
			*str += ft_strlen(g_modifier[i]) - 1;
			return (1);
		}
		i++;
	}
	if (!ft_strchr(g_type, **str) && !(form->type = 0))
		return (0);
	form->type = **str;
	(*str)++;
	return (0);
}

int		ft_precision(t_form *form, char **str)
{
	(*str)++;
	if (**str != '0' && ft_isdigit(**str))
		form->precision = ABS(ft_atoi(*str));
	while (ft_flags(form, str))
	{
		form->width = 0;
		ft_precision(form, str);
		(*str)++;
	}
	while (ft_isdigit(**str))
		(*str)++;
	(*str)--;
	return (1);
}

int		ft_width(t_form *form, char **str)
{
	if (!ft_isdigit(**str))
	{
		if (**str != '.')
			return (ft_modifier(form, str));
		return (ft_precision(form, str));
	}
	form->width = ft_atoi(*str);
	while (ft_isdigit(**str))
		(*str)++;
	(*str)--;
	return (1);
}

int		parsing(t_form *form)
{
	int i;

	i = 0;
	while (*form->buffer)
	{
		if (!ft_flags(form, &form->buffer) && !ft_width(form, &form->buffer))
			return (1);
		(form->buffer)++;
	}
	return (0);
}
