/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 19:47:15 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/28 19:56:25 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_percent(t_arg *arg, va_list ap, int *len_buffer)
{
	t_data	data;
	char	*str;

	data.prc = '%';
	str = ft_memalloc(2);
	str[0] = data.prc;
	str[1] = 0;
	if (!(*len_buffer = prf_set_string(arg, &str, 's')))
		*len_buffer = 1;
	return (str);
}
