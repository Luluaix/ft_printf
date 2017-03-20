/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/20 12:05:24 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/

t_fonct		g_conv[] =
{
	{'c', &ft_type_c},
	{'s', &ft_type_s},
	{'S', &ft_type_us},
	{'d', &ft_type_d},
	{'i', &ft_type_i},
	{'p', &ft_type_p},
	{'o', &ft_type_o},
	{'u', &ft_type_u},
	{'x', &ft_type_x},
	{'X', &ft_type_ux},
	{'f', &ft_type_f},
	{'F', &ft_type_uf},
	{'e', &ft_type_e},
	{'E', &ft_type_ue},
	{'g', &ft_type_g},
	{'G', &ft_type_ug},
	{'a', &ft_type_a},
	{'A', &ft_type_ua},
};

int		ft_set(t_form *form, int *i)
{
	if (!(*i = (int)ft_strchr(form->buffer, '%')))
		return (0);
	*i -= (int)form->buffer;
	form->buffer[*i] = 0;
	form->result = ft_strjoin(form->result, form->buffer);
	ft_strcpy(form->buffer, &form->buffer[*i + 1]);
	ft_bzero(form, sizeof(t_form) - 24);
	return (*i);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_form		form;
	int			ret;
	int			i;

	ft_bzero(&form, sizeof(t_form));
	form.buffer = ft_strdup(format);
	if (!(i = ft_set(&form, &i)))
		return (0);
	va_start(ap, format);
	while ((ret = parsing(&form)) > 0)
	{
		conversion(&form, ap);
		display_struct(&form, format, ap);
		if (!ft_set(&form, &i))
			break;
	}
	form.result = ft_strjoin(form.result, form.buffer);
	ft_putendl(form.result);
	return (0);
}
