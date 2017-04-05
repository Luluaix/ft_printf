/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_prefixe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanie13 <fanie13@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 13:17:29 by fanie13           #+#    #+#             */
/*   Updated: 2017/04/05 15:15:32 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_set_prefixe(t_arg *arg, char **data, int len)
{
	(void)&len;
	if (!*data)
		return ;
	if (SIGNED && NEGATIVE)
	{
		prf_fill_c(arg, data, '-');
	}
	else if (SIGNED)
	{
		FLAG_S ? prf_fill_c(arg, data, ' ') : 0;
		if (FLAG_P && FLAG_S)
		{
			J--;
			WIDTH++;
		}
		FLAG_P ? prf_fill_c(arg, data, '+') : 0;
	}
	FLAG &= ~SIGNED;
}
