/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 12:27:45 by philippe          #+#    #+#             */
/*   Updated: 2017/04/16 19:34:20 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_type_d(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[21];
	char	*ptr;
	int 	len;

	ptr = str;
	ft_bzero(str, 21);
	prf_set_arg(arg, &data, ap, 's');
	prf_lltoa_base(str, data.d, 10);
	FLAG &= FOUR_FLAG;
	FLAG |= PREFIX;
	WIDTH < PRECI ? WIDTH = PRECI : 0;
	if (str[0] == '-')
	{
		FLAG |= NEGATIVE;
		FLAG &= NEG_FLAG;
		ptr = &str[1];
	}
	len = ft_strlen(ptr);
	prf_set_padding((char **)&ptr, arg, len);
}
