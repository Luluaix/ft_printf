/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_fill_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:24:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/05 18:12:50 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_fill_data(t_arg *arg, char **data, int len)
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
		prf_fill_data(arg, data, len);
	}
	*data = NULL;
}
