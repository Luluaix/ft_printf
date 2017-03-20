/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:52:35 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 21:18:17 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"



char	*ft_check_width(t_form *form, char *str)
{
	char	tmp[form->width];
	char	c;
	int		i;

	i = 0;
	c = ' ';
	FLAG_Z ? c = '0' : ' ';
	ft_bzero(tmp, form->width + 1);
	ft_strcpy(tmp, str);
	if (!(FLAG_M))
		while (!tmp[form->width - 1] && (tmp[i] = c))
			ft_strcpy(&tmp[++i], str);
	else
		while (i++ < form->width)
			tmp[i - 1] == '\0' ? tmp[i - 1] = ' ' : tmp[i];
	return (ft_strdup(tmp));
}

char	*ft_set_flags(t_form *form, char *str)
{
	form->width > ft_strlen(str) ? str = ft_check_width(form, str) : str;
	return (str);
}

int		ft_type_s(t_form *form, va_list ap)
{
	t_data	data;

	data.s = va_arg(ap, char *);
	ft_set_s(form, data.s);
	return (0);
}
