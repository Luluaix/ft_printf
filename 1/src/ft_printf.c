/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/16 21:27:03 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/

// int	ft_set_str(t_form *form, char *buffer)

int		ft_conv(t_form *form, va_list ap)
{
	if (form->type == 's')
		va_arg(ap, char *);

	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_form		form;
	char		*buffer;
	char		*result;
	int			i;
	int			ret;
	t_type		type;


	type.i = 2;
	// (void)&ap;
	// ret = 1;
	// i = 12;
	// str = ft_strdup(format);
	ret = 1;
	i = ft_strchr(format, '%') - format;
	result = ft_strsub(format, 0, i);
	buffer = ft_strdup(&format[i + 1]);
	ft_bzero(&form, sizeof(t_struct) + 1);
	va_start(ap, format);
	while (ret > 0)
	{
		if ((ret = parsing(&form, &buffer)) < 0)
			ft_putendl("erreur");
		if (!(i = (int)ft_strchr(buffer, '%')))
			break;
		i -= (int)buffer;
		buffer[i - 1] = 0;
		result = ft_strjoin(result, buffer);
		ft_strcpy(buffer, &buffer[i + 1]);
		// display_struct(&form, buffer, format);
		// ft_conv(&form, ap);
		ft_bzero(&form, sizeof(t_struct) + 1);
	}
	result = ft_strjoin(result, buffer);
	ft_putendl(result);
	return (0);
}
