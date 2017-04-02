/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_padding.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:14:32 by philippe          #+#    #+#             */
/*   Updated: 2017/04/02 20:48:04 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_fill_c(t_arg *arg, int c)
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

void 	prf_set_sign(t_arg *arg, char **data)
{
	if (!*data)
		return ;
	if (data[0][0] != '-' && ft_isdigit(data[0][0]))
	{
		FLAG_S ? prf_fill_c(arg, ' ') : 0;
		FLAG_P && FLAG_S ? J-- : 0;
		FLAG_P ? prf_fill_c(arg, '+') : 0;
	}
	else if(data[0][0] == '-' && SIGN)
	{
		prf_fill_c(arg, '-');
		data[0] = &data[0][1];
		WIDTH++;
	}
}

void	prf_set_padding(char **data, t_arg *arg, int len)
{
	int c;

	c = ' ';
	FLAG_Z ? c = '0' : 0;
	if (FLAG_M)
	{
		if (data[0][0] == '-')
			prf_fill_data(arg, data);
		prf_set_sign(arg, data);
		prf_fill_data(arg, data);
		while (WIDTH - len > 0)
			prf_fill_c(arg, ' ');
		return ;
	}
	if (!FLAG_M)
		if (!FLAG_Z)
			while (WIDTH - len - 1 > 0)
				prf_fill_c(arg, c);
	prf_set_sign(arg, data);
	while (WIDTH - len > 0)
		prf_fill_c(arg, c);
	if (WIDTH-- - len  > 0)
	{
		*data = &(data[0][1]);
		prf_set_padding(data, arg, len);
	}
}
