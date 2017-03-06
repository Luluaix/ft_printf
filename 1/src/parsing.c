/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:12 by philippe          #+#    #+#             */
/*   Updated: 2017/03/06 19:39:27 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		set_form(char *str)
{
	t_form		*form;

	if (!(form = ft_memalloc(sizeof(t_form *))))
		return (0);
	form->flags = flags(str);
	form->width = width(str);
	form->precision = precision(str);
	form->modifier = modifier(str);
	form->type = type(str);
	return (1);
}

int		parsing(const char *str)
{
	int i;
	int	pars;
	ft_putendl("=== Fonction parsing ===");

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			if (!(pars = set_form((char *)&(str[i + 1]))))
				return (0);
			ft_putnbrel(pars);
			ft_putendl(str);
			ft_putendl("% trouvée"), ft_putchar('\n');
		}
		i++;
	}


	ft_putendl("=== Fonction parsing ===");
	return (0);
}
