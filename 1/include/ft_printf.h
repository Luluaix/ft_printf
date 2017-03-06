/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/03/06 19:39:07 by pdamoune         ###   ########.fr       */
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
	int		flags;
	int		width;
	int		precision;
	int		modifier;
	int		type;
};

struct		s_struct
{
	int		code;
	char	*result;
};

int		ft_printf(const char *format, ...);
int		parsing(const char *str);
int		flags(char *str);
int		width(const char *str);
int		precision(const char *str);
int		modifier(const char *str);
int		type(const char *str);
int		color(const char *str);

#endif
