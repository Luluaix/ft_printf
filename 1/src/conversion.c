/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:27:42 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 21:16:51 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void 	ft_set_s(t_form *form, char *str)
{
	int		old_len;

	str = ft_set_flags(form, str);
	old_len = form->len;
	form->len += ft_strlen(str);
	form->result = ft_memrealloc(form->result, old_len, form->len);
	ft_strcpy(&form->result[old_len], str);
}

int		conversion(t_form *form, va_list ap)
{
	int	i;

	i = 0;
	ft_putendl("======= CONVERSION ========");
	while (form->type != g_conv[i].id)
	 	i++;
	(g_conv[i].fonction)(form, ap);
	ft_putendl("======= CONVERSION ========");
	return (0);
}
