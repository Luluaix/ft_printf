/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/03/20 12:08:01 by pdamoune         ###   ########.fr       */
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
typedef struct s_fonct	t_fonct;
typedef	union u_data	t_data;

struct		s_form
{
	int			flags;
	int			width;
	int			precision;
	int			modifier;
	int			type;
	char		*buffer;
	char		*result;
	int			len;
};

struct		s_fonct
{
	int		id;
	int		(*fonction)();
};

union		u_data
{
	unsigned char	c;		//	caractere
	char			*s;		//	chaine de caracteres
	wchar_t			*S;		//	equivalent a ls

	int				d;		//	chiffre decimal
	int			 	i;		//	chiffre decimal
	void			*p;

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

extern t_fonct	g_conv[];

int		ft_printf(const char *format, ...);
int		parsing(t_form *form);
int		conversion(t_form *form, va_list ap);
int		color(const char *str);
void 	display_struct(t_form *form, const char *format, va_list ap);

int		ft_type_c(t_form *form, va_list ap);
int		ft_type_s(t_form *form, va_list ap);
int		ft_type_us(t_form *form, va_list ap);
int		ft_type_d(t_form *form, va_list ap);
int		ft_type_i(t_form *form, va_list ap);
int		ft_type_p(t_form *form, va_list ap);
int		ft_type_o(t_form *form, va_list ap);
int		ft_type_u(t_form *form, va_list ap);
int		ft_type_x(t_form *form, va_list ap);
int		ft_type_ux(t_form *form, va_list ap);
int		ft_type_f(t_form *form, va_list ap);
int		ft_type_uf(t_form *form, va_list ap);
int		ft_type_e(t_form *form, va_list ap);
int		ft_type_ue(t_form *form, va_list ap);
int		ft_type_g(t_form *form, va_list ap);
int		ft_type_ug(t_form *form, va_list ap);
int		ft_type_a(t_form *form, va_list ap);
int		ft_type_ua(t_form *form, va_list ap);



#endif
