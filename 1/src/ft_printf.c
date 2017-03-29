/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/29 11:11:32 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/

static int		g_i = 0;

void 	prf_join_buffer(char *result, char *buf, int *len_result, int *len_buffer)
{
	int				j;

	j = 0;

	while (j < *len_buffer && g_i < 1024)
	{
		// wrg_ite(1, result, g_i);
		result[g_i] = buf[j];
		g_i++;
		j++;
	}
	*len_result = g_i;
	// printf("buf %s\ns   %s\ni   %d\n", buf, result, i);
}

int		prf_search_conv(t_form *form)
{
	if (!(form->len_buffer = (int)ft_strchr(form->buffer, '%')))
		return (0);
	form->len_buffer -= (int)form->buffer;
	form->buffer[form->len_buffer] = 0;
	prf_join_buffer(form->result, form->buffer, &(form->len_result), &(form->len_buffer));
	form->buffer = &form->buffer[form->len_buffer + 1];
	if (!form->len_buffer)
		return (1);
	return (form->len_buffer);
}

void	prf_set_struct(t_form *form, t_arg *arg)
{
	ft_bzero(form, sizeof(t_form));
	ft_bzero(arg, sizeof(t_arg));
	// ft_bzero(form->result, 1024);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_form		form;
	t_arg		arg;
	char		*tmp;

	prf_set_struct(&form, &arg);
	form.buffer = ft_strdup(format);
	tmp = form.buffer;
	if (!(prf_search_conv(&form)))
		return (write(1, format, ft_strlen(format)));
	va_start(ap, format);
	while (prf_parsing(&arg, &(form.buffer)) > 0)
	{
		prf_conversion(&form, &arg, ap);
		// ft_putnbrel(sizeof(char)), ft_putchar('\n');
		// ft_putnbrel(sizeof(short)), ft_putchar('\n');
		// ft_putnbrel(sizeof(int)), ft_putchar('\n');
		// ft_putnbrel(sizeof(long)), ft_putchar('\n');
		// ft_putnbrel(sizeof(long long)), ft_putchar('\n');
		// ft_putnbrel(sizeof(double)), ft_putchar('\n');
		// ft_putnbrel(sizeof(long double)), ft_putchar('\n');
		prf_display_struct(&form, &arg, format, ap);
		// break;
		ft_bzero(&arg, sizeof(t_arg));
		if (!prf_search_conv(&form))
			break;
	}
	form.len_buffer = ft_strlen(form.buffer);
	prf_join_buffer(form.result, form.buffer, &(form.len_result), &(form.len_buffer));
	write(1, form.result, form.len_result);
	ft_strdel(&tmp);
	g_i = 0;
	return (form.len_result);
}
