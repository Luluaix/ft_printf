/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/04/16 20:38:03 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int		prf_fill_buffer(const char *format)
{
	while (format[I] && format[I] != '%' && J != SIZE_BUF)
		BUFFER[J++] = format[I++];
	if (format[I] == '%')
		return (1);
	if (J == SIZE_BUF)
	{
		RET += J;
		J = 0;
		write(1, BUFFER, SIZE_BUF);
		return (prf_fill_buffer(format));
	}
	return (0);
}

void	prf_set_data(t_arg *arg)
{
	ft_bzero(arg, sizeof(t_arg));
	I = 0;
	J = 0;
	RET = 0;
	PRECI = -1;
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_arg		arg;

	prf_set_data(&arg);
	if (!prf_fill_buffer(format))
		return (write(1, format, I));
	va_start(ap, format);
	while (prf_parsing(&arg, format, ap) > 0)
	{
		// prf_display_pars(&arg, format);
		prf_conversion(&arg, ap);
		ft_bzero(&arg, sizeof(t_arg));
		arg.precision = -1;
		if (!prf_fill_buffer(format))
			break;
	}
	RET += J;
	// prf_display_pars(&arg, format);
	write(1, BUFFER, J);
	return (RET);
}
