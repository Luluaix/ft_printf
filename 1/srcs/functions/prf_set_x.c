/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 21:28:25 by philippe          #+#    #+#             */
/*   Updated: 2017/04/03 07:24:01 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void 	prf_set_x(char *str, long long data, int base)
{
	int i;

	i = 0;
	str[i++] = '0';
	base == 16 ? str[i++] = 'x' : 0;
	prf_lltoa_base(&str[i], (L)data, base);
}
