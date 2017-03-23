/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:27:42 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/23 07:14:02 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"









int		conversion(t_form *form, t_arg *arg, va_list ap)
{
	char *str;
	// int old_len;
	int	i;

	i = 0;
	ft_putendl("======= CONVERSION ========");
	while (arg->type != g_conv[i].id)
	 	i++;
	str = (g_conv[i].fonction)(arg, ap);

	// ft_putendl(str);


	// old_len = form->r_len;
	// form->r_len += ft_strlen(str);
	// form->result = ft_memrealloc(form->result, old_len, form->r_len + 1);
	// ft_strcpy(&form->result[old_len], str);
	ft_putendl("======= CONVERSION ========");
	return (0);
}
