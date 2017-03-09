/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/03/09 02:39:00 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/include/libft.h"
# include <stdarg.h>
# define DEB ft_putendl("==== TEST ====");
typedef struct s_form	 t_form;
typedef struct s_struct	 t_struct;

struct		s_form
{
	char	flags[6];
	int		width;
	int		precision;
	char	modifier[3];
	int		type;
};

struct		s_struct
{
	int		code;
	char	*result;
};

int		ft_printf(const char *format, ...);
int		parsing(char *str);
int		flags(t_form *form, char *str);
int		width(t_form *form, char **str);
int		precision(t_form *form, char **str);
int		modifier(t_form *form, char **str);
int		type(t_form *form, char **str);
int		color(const char *str);

#endif
