/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:27:42 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/21 15:41:04 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

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
