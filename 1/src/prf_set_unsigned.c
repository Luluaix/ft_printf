/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 10:54:26 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 20:53:08 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

/*
** gere le flags
*/

void	prf_precision(t_arg *arg, char **str, int *len)
{
	if (FLAG_P || FLAG_S)
	{
		ft_memmove(&str[0][arg->precision - *len + 1], &str[0][1], *len);
		if (FLAG_M)
			ft_memset(&str[0][1], '0', arg->precision - *len);
		else
		{
			ft_memset(&str[0][arg->width - arg->precision], '0', arg->precision - *len);
			FLAG_P ? str[0][arg->width - arg->precision - 1] = '+' : 0;
		}

	}
	else
	{
		ft_memmove(&str[0][arg->precision - *len], &str[0][0], *len);
		ft_memset(&str[0][0], '0', arg->precision - *len);
	}
}

void 	prf_less_width(t_arg *arg, char **str, int *len)
{
	*len += 1;
	ft_memmove(&str[0][1], *str, *len);
	FLAG_S ? str[0][0] = ' ' : 0;
	FLAG_P ? str[0][0] = '+' : 0;
}

void 	prf_more_width(t_arg *arg, char **str)
{
	int		c;
	int		old_len;

	old_len = ft_strlen(*str);
	*str = ft_memrealloc(*str, old_len, arg->width + 2);
	c = ' ';
	if (!(FLAG_M))
	{
		FLAG_Z ? c = '0' : 0;
		ft_memmove(&(str[0][arg->width - old_len]), *str, old_len);
		ft_memset(*str, c, arg->width - old_len);
		FLAG_S ? str[0][arg->width - old_len - 1] = ' ' : 0;
		FLAG_P ? str[0][arg->width - old_len - 1] = '+' : 0;
	}
	else
		ft_memset(&(str[0][old_len]), c, arg->width - old_len);
	if ((FLAG_S || FLAG_P) && FLAG_M)
	{
		ft_memmove(&str[0][1], *str, arg->width - 1);
		FLAG_S ? str[0][0] = ' ' : 0;
		FLAG_P ? str[0][0] = '+' : 0;
	}
}

int 	prf_set_unsigned(t_arg *arg, char **str, int type)
{
	int		len;

	arg->precision ? arg->flags &= ~(1 << 4): 0;
	arg->precision > arg->width ? arg->width = arg->precision : 0;
	if ((len = ft_strlen(*str)) >= arg->width && str[0][0] != '-')
		prf_less_width(arg, str, &len);
	else if (arg->width)
		prf_more_width(arg, str);
	arg->precision > len ? prf_precision(arg, str, &len) : 0;
	return (ft_strlen(*str));
}
