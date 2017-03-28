/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:56 by philippe          #+#    #+#             */
/*   Updated: 2017/03/28 07:45:25 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/include/libft.h"
# include <stdarg.h>
# define DEB ft_putendl("==== TEST ====");
# define RES ft_putendl(form->result);
# define BUF ft_putendl(form->buffer);
# define LB ft_putnbrel(form->len_buffer);
# define LR ft_putnbrel(form->len_result);
# define TMP ft_putendl(tmp);
# define TEST_COMB(X)	1 << X
# define FLAG_H			arg->flags & 1 << 0
# define FLAG_P			arg->flags & 1 << 1
# define FLAG_S			arg->flags & 1 << 2
# define FLAG_M			arg->flags & 1 << 3
# define FLAG_Z			arg->flags & 1 << 4

typedef struct s_form	t_form;
typedef struct s_arg	t_arg;
typedef struct s_fonct	t_fonct;
typedef	union u_data	t_data;

struct		s_form
{
	char		result[1024];
	char		*buffer;
	int			len_result;
	int			len_buffer;
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
	char	*(*fonction)();
};

union		u_data
{
	unsigned int	c;		//	caractere
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

extern t_fonct	g_conv[];

int		ft_printf(const char *format, ...);
int		prf_parsing(t_arg *arg, char **buffer);
int		prf_conversion(t_form *form, t_arg *arg, va_list ap);
// int		color(const char *str);
int 	prf_set_string(t_arg *arg, char **str, int type);
int 	prf_set_unsigned(t_arg *arg, char **str, int type);
void 	prf_join_buffer(char *result, char *buf, int *len_result, int *len_buffer);
void 	prf_display_struct(t_form *form, t_arg *arg, const char *format, va_list ap);

void	prf_lltoa_base(char *result, long long n, unsigned int base);
// char	*ft_set_flags(t_form *form, char *str);
char	*ft_type_c(t_arg *arg, va_list ap, int *len_buffer);
char	*ft_type_s(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_us(t_arg *arg, va_list ap, int *len_buffer);
char	*ft_type_d(t_arg *arg, va_list ap, int *len_buffer);
char	*ft_type_i(t_arg *arg, va_list ap, int *len_buffer);
char	*ft_type_p(t_arg *arg, va_list ap, int *len_buffer);
char	*ft_type_o(t_arg *arg, va_list ap, int *len_buffer);
char	*ft_type_u(t_arg *arg, va_list ap, int *len_buffer);
char	*ft_type_x(t_arg *arg, va_list ap, int *len_buffer);
char	*ft_type_ux(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_f(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_uf(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_e(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_ue(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_g(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_ug(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_a(t_arg *arg, va_list ap, int *len_buffer);
// char	*ft_type_ua(t_arg *arg, va_list ap, int *len_buffer);



#endif
