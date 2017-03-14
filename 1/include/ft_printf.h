/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/03/14 16:50:39 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/include/libft.h"
# include <stdarg.h>
# define DEB ft_putendl("==== TEST ====");
# define FLAG(X)		1 << X
# define MODIFIER(X)	1 << X

typedef struct s_form	 t_form;
typedef struct s_struct	 t_struct;

struct		s_form
{
	int		flags;
	int		width;
	int		precision;
	int		modifier;
	unsigned int		type;
};

struct		s_struct
{
	int		code;
	char	*result;
};

int		ft_printf(const char *format, ...);
int		parsing(t_form *form, char *str);
void 	display_struct(t_form *form);
int		color(const char *str);

#endif
