/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:12 by philippe          #+#    #+#             */
/*   Updated: 2017/03/08 21:56:15 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void 	display_struct(t_form *form)
{
	ft_putendl("======== STRUCTURE =========");
	ft_putstr("form->flags     = "), ft_putendl(form->flags);
	ft_putstr("form->width     = "), ft_putnbrel(form->width);
	ft_putstr("form->precision = "), ft_putnbrel(form->precision);
	ft_putstr("form->modifier  = "), ft_putendl(form->modifier);
	ft_putstr("form->type      = "), ft_putendl(&form->type);
	ft_putendl("======== STRUCTURE =========");
}

t_form		*set_form(char *str)
{
	t_form		*form;

	if (!(form = ft_memalloc(sizeof(t_form *))))
		return (NULL);
	// ft_strcpy(form->flags, flags(str));

	return (form);
}

int		parsing(char *str)
{
	int i;
	char	*buffer;
	t_form	*form;
	ft_putendl("=== Fonction parsing ===");

	i = 0;
	buffer = ft_strsub(str, 0, ft_strchr(str, '%') - str);
	if (!(form = ft_memalloc(sizeof(t_form *))))
		return (0);
	while (*str++ != '%')
		i++;
	str++;
	ft_bzero(form->flags, 7);
	flags(form, &str);
	width(form, &str);
	precision(form, &str);
	ft_bzero(form->modifier, 3);
	modifier(form, &str);
	ft_putendl(str);
	type(form, &str);
	display_struct(form);


	ft_putendl("=== Fonction parsing ===");
	return (0);
}
