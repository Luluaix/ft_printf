/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 12:27:45 by philippe          #+#    #+#             */
/*   Updated: 2017/04/14 19:06:23 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../includes/ft_printf.h"

void	prf_type_d(t_arg *arg, va_list ap)
{
	t_data	data;
	char	str[13];
	char	*ptr;
	int 	len;

	ptr = str;
	ft_bzero(str, 13);
	data.d = va_arg(ap, int);
	prf_lltoa_base(str, data.d, 10);
	FLAG &= FOUR_FLAG;
	// FLAG |= SIGN;
	WIDTH < PRECI ? WIDTH = PRECI : 0;
	if (str[0] == '-')
	{
		ptr = &str[1];
		// FLAG |= SIGN_NEG;
	}
	// !FLAG_M && (FLAG_P || FLAG_S || NEGATIVE) ? WIDTH += 1 : 0;
	len = ft_strlen(ptr);
	prf_set_padding((char **)&ptr, arg, len);
}
