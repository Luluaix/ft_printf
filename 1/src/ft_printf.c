/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/15 17:45:31 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/

// int	ft_set_str(t_form *form, char *str)

int	ft_printf(const char *format, ...)
{
	va_list		 ap;
	char		*str;
	int			i;
	int			ret;
	t_form		form;

	(void)&ap;
	ret = 1;
	i = 12;
	str = ft_strdup(format);
	ft_bzero(&form, sizeof(t_struct) + 1);
	while (*format && ret > 0)
	{
		if ((ret = parsing(&form, &str)) < 0)
			ft_putendl("erreur");
		break;
	}	// printf("| = printf = |%d\n", printf("%40d", 3));
	display_struct(&form, str, (char *)format);
	return (0);
}
