/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:12 by philippe          #+#    #+#             */
/*   Updated: 2017/03/13 17:28:02 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void 	display_struct(t_form *form)
{
	ft_putendl("======== STRUCTURE =========");
	ft_putstr("form->flags     = "), ft_putnbr_bin(form->flags), ft_putchar('\n');
	ft_putstr("form->width     = "), ft_putnbrel(form->width);
	ft_putstr("form->precision = "), ft_putnbrel(form->precision);
	ft_putstr("form->modifier  = "), ft_putnbr_bin(form->modifier);
	// ft_putstr("form->type      = "), ft_putendl(&form->type);
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
	while (*str)
	{
		if (!flags(form, &str))
			if (!width(form, &str))
				if (!precision(form, &str))
					if (!modifier(form, &str))
						if (type(form, &str))
							break ;
		DEB
		str++;
	}
	ft_putendl("=== Fin PARSING ===");
	display_struct(form);
	return (0);
}
