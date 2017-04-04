/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_padding.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:14:32 by philippe          #+#    #+#             */
/*   Updated: 2017/04/04 09:43:54 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_fill_c(t_arg *arg, char **data, int c)
{
	BUFFER[J] = c;
	J++;
	WIDTH--;
	if (J == SIZE_BUF)
	{
		RET += J;
		J = 0;
		write(1, BUFFER, SIZE_BUF);
	}
}

void 	prf_set_sign(t_arg *arg, char **data, int len)
{
	if (!*data)
		return ;
	if (!SIGN)
	{
		FLAG_S ? prf_fill_c(arg, data, ' ') : 0;
		if (FLAG_P && FLAG_S)
		{
			J--;
			WIDTH++;
		}
		FLAG_P ? prf_fill_c(arg, data, '+') : 0;
	}
	else if(SIGN)
	{
		prf_fill_c(arg, data, '-');
	}
}

void	prf_set_padding(char **data, t_arg *arg, int len)
{
	int c;

	c = ' ';
	FLAG_Z ? c = '0' : 0;
	if (FLAG_M)
	{
		prf_set_sign(arg, data, len);
		prf_fill_data(arg, data, len);
		while (WIDTH - len > 0)
			prf_fill_c(arg, data, ' ');
		return ;
	}
	if (!FLAG_M)
		if (!FLAG_Z)
			while (WIDTH - PRECI - 1 > 0)
				prf_fill_c(arg, data, c);
	while (WIDTH - PRECI > 0)
		prf_fill_c(arg, data, ' ');
	if (FLAG_S || FLAG_P || SIGN)
		J--;
	prf_set_sign(arg, data, len);
	while (WIDTH - PRECI > 0)
		prf_fill_c(arg, data, c);
	if (WIDTH-- - PRECI > 0)
	{
		*data = &(data[0][1]);
		prf_set_padding(data, arg, len);
	}
}
