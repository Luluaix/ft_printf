/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_fill_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:24:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/31 14:01:55 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/ft_printf.h"

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
	*data = NULL;
}
