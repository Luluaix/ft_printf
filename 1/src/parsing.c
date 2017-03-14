/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:12 by philippe          #+#    #+#             */
/*   Updated: 2017/03/14 13:24:45 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		g_flags[6] = {'#', '+', '-', ' ', '0'};
char	*g_modifier[7] = {"ll", "hh", "h", "l", "j", "z", 0};
char	g_type[15] = {"diouxXfeEgGcsp"};


void 	display_struct(t_form *form)
{
	ft_putendl("======== STRUCTURE =========");
	ft_putstr("form->flags     = "), ft_putnbr_bin(form->flags), ft_putchar('\n');
	ft_putstr("form->width     = "), ft_putnbrel(form->width);
	ft_putstr("form->precision = "), ft_putnbrel(form->precision);
	ft_putstr("form->modifier  = "), ft_putnbr_bin(form->modifier), ft_putchar('\n');
	ft_putstr("form->type      = "), ft_putendl(&form->type);
	ft_putendl("======== STRUCTURE =========");
}

t_form		*set_form(char *str)
{
	t_form		*form;

	if (!(form = ft_memalloc(sizeof(t_form))))
		return (NULL);
	// ft_strcpy(form->flags, flags(str));

	return (form);
}

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
				form->flags |= FLAG(i);
				return (1);
			}
			i++;
		}
		(*str)++;
	}
	(*str)--;
	return (0);
}

int		ft_precision(t_form *form, char **str)
{
	if (**str != '.')
		return (0);
	(*str)++;
	form->precision = ft_atoi(*str);
	while (ft_flags(form, str))
	{
		form->width = 0;
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
		return (0);
	}
	form->width = ft_atoi(*str);
	while (ft_isdigit(**str))
		(*str)++;
	(*str)--;
	return (1);
}

int		ft_modifier(t_form *form, char **str)
{
	int i;

	i = 0;
	while (i < 6 && **str)
	{
		if (!ft_strncmp(g_modifier[i], *str, ft_strlen(g_modifier[i])))
		{
			form->modifier |= MODIFIER(i);
			*str += ft_strlen(g_modifier[i]) - 1;

			return (1);
		}
		i++;
	}
	ft_putendl(*str);

	return (0);
}

int		ft_type(t_form *form, char **str)
{
	ft_putendl(*str);
	if (!ft_strchr(g_type, **str) && !(form->type = 0))
		return (0);
	form->type = **str;
	(*str)++;
	return (0);
}


int		parsing(char *str)
{
	int i;
	// char	*buffer;
	t_form	*form;
	// char	*buf;
	// char	*flag = "#-+.*0123456789";
	// char 	*last_flag = "hlLdiouxXfeEgGcsp";

	ft_putendl("=== Fonction PARSING ===");
	i = 0;
	if (!(form = ft_memalloc(sizeof(t_form))))
		return (0);

	// width(form, &str);
	while (i < 6)
		ft_putendl(g_modifier[i++]);
	while (*str)
	{
		if (!ft_flags(form, &str)
		&& !ft_width(form, &str)
		&& !ft_precision(form, &str)
		&& !ft_modifier(form, &str)
		&& !ft_type(form, &str))
			break ;
		else if (*str)
			str++;
	}
	ft_putendl(str);
	ft_putendl("=== Fin PARSING ===");
	display_struct(form);
	return (0);
}
