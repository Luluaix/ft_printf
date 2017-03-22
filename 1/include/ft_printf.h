/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/03/17 16:15:17 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/include/libft.h"
# include <stdarg.h>
# define DEB ft_putendl("==== TEST ====");
# define TEST_COMB(X)	1 << X
# define ABS(X)			X < 0 ? -X : X;

typedef struct s_form	t_form;
typedef struct s_struct	t_struct;
typedef	union u_type	t_type;

struct		s_form
{
	int			flags;
	int			width;
	int			precision;
	int			modifier;
	int			type;
	int			len;
	char		*buffer;
	char		*result;
};

union		u_type
{
	unsigned char	c;		//	caractere
	char			*s;		//	chaine de caracteres
	wchar_t			*S;		//	equivalent a ls

	int				d;		//	chiffre decimal
	int			 	i;		//	chiffre decimal
	int				p;

	unsigned int	o;		//	chiffre octal
	unsigned int	u;		//	chiffre decimal
	unsigned int	x;		//	chiffre hexa
	unsigned int	X;		//	chiffre hexa em majuscule

	double			f;		//	chiffre a vrigule sans l exposant
	double			F;		//	???????????????????????????????
	double			e;		//	chffre a virgule avec l exposant
	double			E;		//	???????????????????????????????
	double			g;		//	converti en f ou e, utilise si l exposant < -4 ou >= precision
	double			G;		//	comme f mais avec E et F
	double			a;		//	argument de type double convertis en hexa prefixe 0x
	double			A;		//	argument de type double convertis en hexa prefixe 0X




};

int		ft_printf(const char *format, ...);
int		parsing(t_form *form);
void 	display_struct(t_form *form, const char *format, va_list ap);
int		color(const char *str);

#endif
