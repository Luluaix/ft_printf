/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:27:42 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/15 20:58:56 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_fonct		g_conv[] =
{
	{'%', &prf_type_percent},
	{'c', &prf_type_c},
	{'s', &prf_type_s},
	// {'S', &ft_type_us},
	{'d', &prf_type_d},
	// {'i', &ft_type_d},
	{'p', &prf_type_x},
	{'o', &prf_type_o},
	{'u', &prf_type_u},
	{'x', &prf_type_x},
	{'X', &prf_type_x},
	// {'f', &ft_type_f},
	// {'F', &ft_type_uf},
	// {'e', &ft_type_e},
	// {'E', &ft_type_ue},
	// {'g', &ft_type_g},
	// {'G', &ft_type_ug},
	// {'a', &ft_type_a},
	// {'A', &ft_type_ua},
	// {0, &ft_type_nul},
};



int		prf_conversion(t_arg *arg, va_list ap)
{
	int	i;

	i = 0;
	while (arg->type != g_conv[i].id)
	 	i++;
	(g_conv[i].fonction)(arg, ap);
	return (0);
}
