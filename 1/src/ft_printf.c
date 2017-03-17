/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/17 06:26:31 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/

// int	ft_set_str(t_form *form, char *buffer)

void	ft_type_p(t_struct *result, t_form *form, va_list ap)
{
	result->result = ft_strjoin(result->result, "0x");
	result->result = ft_strjoin(result->result,
		ft_ulltoa_base((U L)va_arg(ap, void*), 16));
}

int		ft_conv_type(t_struct *result, t_form *form, va_list ap)
{
	if (form->type == 'p')
		ft_type_p(result, form, ap);
	return (0);
}

int		ft_re_set(t_struct *result, t_form *form, int *i)
{
	if (!(*i = (int)ft_strchr(result->buffer, '%')))
		return (0);
	*i -= (int)result->buffer;
	result->buffer[*i - 1] = 0;
	result->result = ft_strjoin(result->result, result->buffer);
	ft_strcpy(result->buffer, &result->buffer[*i + 1]);
	ft_bzero(form, sizeof(t_struct));
	return (1);
}

int 	ft_set(t_form *form, t_struct *result, const char *format)
{
	int		i;

	i = ft_strchr(format, '%') - format;
	result->buffer = ft_strdup(&format[i + 1]);
	result->result = ft_strsub(format, 0, i);
	ft_bzero(form, sizeof(t_form));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_form		form;
	t_struct	result;
	int			ret;
	int			i;

	ret = 1;
	i = ft_set(&form, &result, format);
	va_start(ap, format);
	while ((ret = parsing(&form, &result.buffer)) > 0)
	{
		ft_conv_type(&result, &form, ap);
		//display_struct(&form, &result, format, ap);
		if (!ft_re_set(&result, &form, &i))
			break;
	}
	result.result = ft_strjoin(result.result, result.buffer);
	ft_putendl(result.result);
	return (0);
}
