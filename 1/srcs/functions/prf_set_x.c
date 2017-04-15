/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 21:28:25 by philippe          #+#    #+#             */
/*   Updated: 2017/04/15 20:46:26 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void 	prf_set_x(t_arg *arg)
{
	int i;

	i = 0;
	BUFFER[J] = '0';
	J++;
	WIDTH--;
	BUFFER[J] = 'x';
	TYPE == 'X' ? BUFFER[J] = 'X': 0;
	J++;
	WIDTH--;
}
