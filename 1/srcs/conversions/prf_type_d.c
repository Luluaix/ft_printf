/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 12:27:45 by philippe          #+#    #+#             */
/*   Updated: 2017/04/03 21:05:58 by fanie13          ###   ########.fr       */
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
	len = ft_strlen(str);
	FLAG &= FOUR_FLAG;
	FLAG |= SIGN_FLAG;
	ft_putaddr(&str[1]);
	ft_putchar('\n');
	prf_set_padding((char **)&ptr, arg, len);
	prf_fill_data(arg, (char **)&ptr);
}
