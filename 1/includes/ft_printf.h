/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/04/03 07:46:14 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/include/libft.h"
# include <stdarg.h>
# include <limits.h>
# define DEB ft_putendl("==== TEST ====");
# define BUFFER			g_buffer
# define I				g_iformat
# define J				g_ibuffer
# define RET			g_ret
# define SIZE_BUF		8192
# define FLAG			arg->flags
# define WIDTH			arg->width
# define PRECI 			arg->precision
# define MOD			arg->modifier
# define TYPE			arg->type
# define TEST_COMB(X)	(1 << X)
# define FLAG_H			(FLAG & 0b000001)
# define FLAG_P			(FLAG & 0b000010)
# define FLAG_S			(FLAG & 0b000100)
# define FLAG_M			(FLAG & 0b001000)
# define FLAG_Z			(FLAG & 0b010000)
# define SIGN			(FLAG & 0b100000)
# define SIGN_FLAG		0b100000
# define TWO_FLAG		0b011000
# define THREE_FLAG		0b011001
# define FOUR_FLAG		0b011110
# define FIVE_FLAG		0b011111
# define MOD_HH			(MOD & 0b000001)
# define MOD_H			(MOD & 0b000010)
# define MOD_L			(MOD & 0b000100)
# define MOD_LL			(MOD & 0b001000)
# define MOD_J			(MOD & 0b010000)
# define MOD_Z			(MOD & 0b100000)


typedef struct s_form	t_form;
typedef struct s_arg	t_arg;
typedef struct s_fonct	t_fonct;
typedef	union u_data	t_data;

struct		s_form
{
	char		*ptr;
};

struct		s_arg
{
	int			flags;
	int			width;
	int			precision;
	int			modifier;
	int			type;
};

struct		s_fonct
{
	int		id;
	void	(*fonction)();
};

union		u_data
{
	char			c[2];	// caractere %
	char			*s;		//	chaine de caracteres
	wchar_t			*us;		//	equivalent a ls
	void			*p;

	int				d;		//	chiffre decimal
	int			 	i;		//	chiffre decimal

	unsigned int	o;		//	chiffre octal
	unsigned int	u;		//	chiffre decimal
	unsigned int	x;		//	chiffre hexa
	unsigned int	ux;		//	chiffre hexa em majuscule

	double			f;		//	chiffre a vrigule sans l exposant
	double			uf;		//	???????????????????????????????
	double			e;		//	chffre a virgule avec l exposant
	double			ue;		//	???????????????????????????????
	double			g;		//	converti en f ou e, utilise si l exposant < -4 ou >= precision
	double			ug;		//	comme f mais avec E et F
	double			a;		//	argument de type double convertis en hexa prefixe 0x
	double			ua;		//	argument de type double convertis en hexa prefixe 0X
};


char	g_buffer[SIZE_BUF];
int		g_iformat;
int		g_ibuffer;
int		g_ret;
extern t_fonct	g_conv[];

int		ft_printf(const char *format, ...);
int		prf_parsing(t_arg *arg, const char *format);
void 	prf_display_pars(t_arg *arg, const char *format);
int		prf_conversion(t_arg *arg, va_list ap);
void	prf_fill_data(t_arg *arg, char *data);
void	prf_lltoa_base(char *result, long long n, unsigned int base);
void	prf_set_x(char *str, long long data, int base);
void	prf_type_percent(t_arg *arg, va_list ap);
void	prf_type_p(t_arg *arg, va_list ap);
void	prf_type_s(t_arg *arg, va_list ap);
void	prf_type_c(t_arg *arg, va_list ap);
void	prf_type_d(t_arg *arg, va_list ap);
void	prf_type_o(t_arg *arg, va_list ap);
void	prf_type_x(t_arg *arg, va_list ap);
void	prf_type_u(t_arg *arg, va_list ap);
void	prf_set_padding(char *data, t_arg *arg, int len);


// // void 	ft_set_flags(t_arg *arg, char type);
//
// int		prf_conversion(t_form *form, t_arg *arg, va_list ap);
// // int		color(const char *str);
// int 	prf_set_string(t_arg *arg, char **str, int type);
// int 	prf_set_unsigned(t_arg *arg, char **str, int type);
// void 	prf_join_buffer(char *result, char *buf, int *len_result, int *len_buffer);
//
// void	prf_lltoa_base(char *result, long long n, unsigned int base);
// // char	*ft_set_flags(t_form *form, char *str);
// char	*ft_percent(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_c(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_s(t_arg *arg, va_list ap, int *len_buffer);
// // char	*ft_type_us(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_d(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_i(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_p(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_o(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_u(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_x(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_ux(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_f(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_uf(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_e(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_ue(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_g(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_ug(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_a(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_ua(t_arg *arg, va_list ap, int *len_buffer);



#endif
