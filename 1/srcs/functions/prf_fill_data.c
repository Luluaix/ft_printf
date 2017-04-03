/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_fill_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:24:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/03 21:47:58 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void 	prf_fill_c(t_arg *arg, char **data, int c)
{
	if (WIDTH > PRECI + 1 && !FLAG_M)
	{
		c = ' ';
	}
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

void 	prf_precision(t_arg *arg, char *data, int len)
{

}

void	prf_fill_data(t_arg *arg, char **data)
{
	int i;

	i = 0;
	if (!*data)
		return ;
	while (data[0][i] && J != SIZE_BUF)
	{
		BUFFER[J++] = data[0][i++];
	}
	if (J == SIZE_BUF)
	{
		RET += J;
		J = 0;
		write(1, BUFFER, SIZE_BUF);
		prf_fill_data(arg, data);
	}
	data[0][0] = 0;
}
