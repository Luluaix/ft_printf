/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:40:41 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/27 18:59:43 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

/*
** gere le flags
*/


static void	ft_check_width(t_arg *arg, char **str)
{
	int		old_len;
	int		c;

	old_len = ft_strlen(*str);
	if (arg->width < old_len)
		return ;
	*str = ft_memrealloc(*str, old_len, arg->width + 1);
	c = '0';
	FLAG_S ? c = ' ' : 0;
	if (!(FLAG_M))
	{
		ft_memmove(&(str[0][arg->width - old_len]), *str, old_len);
		ft_memset(*str, c, arg->width - old_len);
	}
	else
		ft_memset(&(str[0][old_len]), c, arg->width - old_len);
}

int 	prf_set_string(t_arg *arg, char **str, int type)
{
	(void)&type;
	ft_check_width(arg, str);
	return (ft_strlen(*str));
}
