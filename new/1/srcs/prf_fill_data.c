/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_fill_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:24:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/29 17:34:11 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/ft_printf.h"

void	prf_fill_data(char *data)
{
	int i;

	i = 0;
	if (data[0] == 0)
		BUFFER[J++] = 0;
	while (data[i] && J != SIZE_BUF)
		BUFFER[J++] = data[i++];
	if (J == SIZE_BUF)
	{
		RET += J;
		J = 0;
		write(1, BUFFER, SIZE_BUF);
		prf_fill_data(data);
	}
}
