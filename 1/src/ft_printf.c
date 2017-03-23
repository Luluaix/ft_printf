/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:17:35 by philippe          #+#    #+#             */
/*   Updated: 2017/03/23 07:40:01 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** {color}
** % [FLAGS] [WIDHT] [.PRECISION] [MODIFIER] TYPE
*/

t_fonct		g_conv[] =
{
	{'c', &ft_type_c},
	{'s', &ft_type_s},
	// {'S', &ft_type_us},
	// {'d', &ft_type_d},
	// {'i', &ft_type_i},
	{'p', &ft_type_p},
	// {'o', &ft_type_o},
	// {'u', &ft_type_u},
	// {'x', &ft_type_x},
	// {'X', &ft_type_ux},
	// {'f', &ft_type_f},
	// {'F', &ft_type_uf},
	// {'e', &ft_type_e},
	// {'E', &ft_type_ue},
	// {'g', &ft_type_g},
	// {'G', &ft_type_ug},
	// {'a', &ft_type_a},
	// {'A', &ft_type_ua},
};

void 	ft_join_buf(char *result, char *buf)
{
	static int		i = 0;
	int				len;
	int				b_len;

	len = ft_strlen(buf);
	b_len = len;
	// ft_putendl(result);
	// ft_putnbrel(i);
	// ft_putnbrel(i + len);
	printf("s %s\ni %d\nl %d\n", result, i, len);

	result = ft_memrealloc(result, i, 1024);
	while (len + 1)
	{
		// ft_putendl(buf);

		result[i + len - 1] = buf[len - 1];
		len--;

	}
	// ft_putendl(result);
	i += b_len;
	ft_strcpy(buf, &buf[b_len + 1]);


}

int		ft_set(t_form *form)
{
	int		old_len;

	if (!(old_len = (int)ft_strchr(form->buffer, '%')))
		return (0);
	else
		form->b_len = old_len;
	form->b_len -= (int)form->buffer;
	form->buffer[form->b_len] = 0;
	// ft_putendl(form->buffer);
	old_len = form->r_len;
	form->r_len += form->b_len;
	ft_join_buf(form->result, form->buffer);
	// form->result = ft_memrealloc(form->result, old_len, form->r_len);
	// ft_strcpy(&form->result[old_len], form->buffer);

	return (form->b_len);
}



int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_form		form;
	t_arg		arg;
	int			ret;
	// int			i;

	ft_bzero(&form, sizeof(t_form));
	ft_bzero(&arg, sizeof(t_arg));
	form.buffer = ft_strdup(format);
	if (!(ft_set(&form)))
		return (write(1, format, ft_strlen(format)));
	va_start(ap, format);
	while ((ret = parsing(&arg, &(form.buffer))) > 0)
	{
		conversion(&form, &arg, ap);
		display_struct(&form, &arg, format, ap);
		if (!ft_set(&form))
			break;
	}
	form.result = ft_memrealloc(form.result, form.r_len, form.r_len + form.b_len);
	ft_memcpy(&form.result[form.r_len], form.buffer, form.b_len + 1);
	ft_putendl(form.result);
	return (0);
}
