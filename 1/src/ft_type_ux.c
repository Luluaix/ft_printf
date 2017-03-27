/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_ux.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:53:41 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 11:47:24 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_type_ux(t_arg *arg, va_list ap, int *len_buffer)
{
	t_data	data;
	char	*str;
	int		i;

	i = -1;
	data.ux = va_arg(ap, unsigned int);
	str = ft_memalloc(11);
	prf_lltoa_base(str, (U) data.u, 16);
	while (str[++i])
		ft_islower(str[i]) ? str[i] = ft_toupper(str[i]) : str[i];
	*len_buffer = prf_set_unsigned(arg, &str, 's');
	return (str);
}
