/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:40:41 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/21 22:23:50 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_check_flags(t_form *form, char *str, int type)
{
	char	c;
	int		i;

	i = 0;
	c = ' ';
	FLAG_Z ? c = '0' : ' ';
	if (!(FLAG_M) && form->width)
	{
		// if (FLAG_P)
		// {
		// 	ft_memmove(&str[1], str, form->width - 1);
		// 	str[0] = '+';
		// }

		while (!str[form->width - 1])
		{
			ft_memmove(&str[i + 1], &str[i], form->width - i - 1);
			str[i++] = c;
			FLAG_S ? str[0] = ' ' : str[0];
		}
	}
	else
	{
		while (++i < form->width)
			str[i] == '\0' ? str[i] = ' ' : str[i];
		if (type == 'd')
		{
			ft_memmove(&str[1], str, form->width - 1);
			str[0] = ' ';
			FLAG_P ? str[0] = '+' : str[0];
		}
	}
	return (str);
}

char	*ft_check_width(t_form *form, char *str)
{
	int		old_len;

	old_len = ft_strlen(str);
	if (form->width < old_len)
		return (str);
	str = ft_memrealloc(str, old_len, form->width + 1);
	return (str);
	// c = ' ';
	// FLAG_Z ? c = '0' : ' ';
	// ft_bzero(tmp, form->width + 1);
	// ft_strcpy(tmp, str);
	// if (!(FLAG_M))
	// 	while (!tmp[form->width - 1] && (tmp[i] = c))
	// 		ft_strcpy(&tmp[++i], str);
	// else
	// 	while (i++ < form->width)
	// 		tmp[i - 1] == '\0' ? tmp[i - 1] = ' ' : tmp[i];
	// return (ft_strdup(tmp));
}

void 	ft_set_string(t_form *form, char *str, int type)
{
	int		old_len;

	form->width ? str = ft_check_width(form, str) : str;
	form->flags ? str = ft_check_flags(form, str, type) : str;
	old_len = form->len;
	form->len += ft_strlen(str);
	form->result = ft_memrealloc(form->result, old_len, form->len + 1);
	ft_strcpy(&form->result[old_len], str);


}
