/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/03/15 17:44:40 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/include/libft.h"
# include <stdarg.h>
# define DEB ft_putendl("==== TEST ====");
# define TEST_COMB(X)	1 << X
# define ABS(X)			X < 0 ? -X : X;

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
int		parsing(t_form *form, char **str);
void 	display_struct(t_form *form, char *str, char *format);
int		color(const char *str);

#endif
