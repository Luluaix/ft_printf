/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/03/13 17:25:43 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/include/libft.h"
# include <stdarg.h>
# define DEB ft_putendl("==== TEST ====");
# define FLAG_HASH	1 << 0
# define FLAG_PLUS	1 << 1
# define FLAG_MIN	1 << 2
# define FLAG_SP	1 << 3
# define FLAG_ZERO	1 << 4

# define MODIF_H	(1 << 0)
# define MODIF_HH	(1 << 1)
# define MODIF_L	(1 << 2)
# define MODIF_LL	(1 << 3)
# define MODIF_J	(1 << 4)
# define MODIF_Z	(1 << 5)

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
int		parsing(char *str);
int		flags(t_form *form, char **str);
int		width(t_form *form, char **str);
int		precision(t_form *form, char **str);
int		modifier(t_form *form, char **str);
int		type(t_form *form, char **str);
int		color(const char *str);

#endif
