/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/17 16:22:50 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/

// int	ft_set_str(t_form *form, char *buffer)

void	ft_type_p(t_form *form, va_list ap)
{
	form->result = ft_strjoin(form->result, "0x");
	form->result = ft_strjoin(form->result,
		ft_ulltoa_base((U L)va_arg(ap, void*), 16));
}

int		ft_conv_type(t_form *form, va_list ap)
{
	if (form->type == 'p')
		ft_type_p(form, ap);
	return (0);
}

int		ft_re_set(t_form *form, int *i)
{
	if (!(*i = (int)ft_strchr(form->buffer, '%')))
		return (0);
	*i -= (int)form->buffer;
	form->buffer[*i - 1] = 0;
	form->result = ft_strjoin(form->result, form->buffer);
	ft_strcpy(form->buffer, &form->buffer[*i + 1]);
	ft_bzero(form, sizeof(t_form) - (2 * sizeof(form->buffer) + 4));
	return (1);
}

int 	ft_set(t_form *form, const char *format)
{
	int		i;

	i = ft_strchr(format, '%') - format;
	form->buffer = ft_strdup(&format[i + 1]);
	form->result = ft_strsub(format, 0, i);
	ft_putnbrel(sizeof(form->flags));
	ft_putnbrel(sizeof(form->width));
	ft_putnbrel(sizeof(form->precision));
	ft_putnbrel(sizeof(form->modifier));
	ft_putnbrel(sizeof(form->type));
	ft_putnbrel(sizeof(form->len));
	ft_putnbrel(sizeof(form->buffer));
	ft_putnbrel(sizeof(form->result));
	ft_putnbrel(sizeof(t_form) - (2 * sizeof(form->buffer) + 4));
	ft_bzero(form, sizeof(t_form) - (2 * sizeof(form->buffer) + 4));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_form		form;
	int			ret;
	int			i;

	ret = 1;
	i = ft_set(&form, format);
	va_start(ap, format);
	while ((ret = parsing(&form)) > 0)
	{
		ft_conv_type(&form, ap);
		display_struct(&form, format, ap);
		if (!ft_re_set(&form, &i))
			break;
	}
	form.result = ft_strjoin(form.result, form.buffer);
	ft_putendl(form.result);
	return (0);
}
