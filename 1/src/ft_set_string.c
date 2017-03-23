/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:40:41 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/23 07:04:17 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/ft_printf.h"

char	*ft_check_flags(t_arg *arg, char *str, int type)
{
	char	c;
	int		i;

	i = 0;
	c = ' ';
	FLAG_Z ? c = '0' : ' ';
	if (!(FLAG_M) && arg->width)
	{
		// if (FLAG_P)
		// {
		// 	ft_memmove(&str[1], str, arg->width - 1);
		// 	str[0] = '+';
		// }

		while (!str[arg->width - 1])
		{
			ft_memmove(&str[i + 1], &str[i], arg->width - i - 1);
			str[i++] = c;
			FLAG_S ? str[0] = ' ' : str[0];
		}
	}
	else
	{
		while (++i < arg->width)
			str[i] == '\0' ? str[i] = ' ' : str[i];
		if (type == 'd')
		{
			ft_memmove(&str[1], str, arg->width - 1);
			str[0] = ' ';
			FLAG_P ? str[0] = '+' : str[0];
		}
	}
	return (str);
}

void	ft_check_width(t_arg *arg, char **str)
{
	int		old_len;

	old_len = ft_strlen(*str);
	if (arg->width > old_len)
		*str = ft_memrealloc(*str, old_len, arg->width);
	// c = ' ';
	// FLAG_Z ? c = '0' : ' ';
	// ft_bzero(tmp, arg->width + 1);
	// ft_strcpy(tmp, str);
	// if (!(FLAG_M))
	// 	while (!tmp[arg->width - 1] && (tmp[i] = c))
	// 		ft_strcpy(&tmp[++i], str);
	// else
	// 	while (i++ < arg->width)
	// 		tmp[i - 1] == '\0' ? tmp[i - 1] = ' ' : tmp[i];
	// return (ft_strdup(tmp));
}

void 	ft_set_string(t_arg *arg, char **str, int type)
{
	// free(*str);
	ft_check_width(arg, str);
	ft_putendl(*str);
	// arg->flags ? str = ft_check_flags(arg, str, type) : str;

}
