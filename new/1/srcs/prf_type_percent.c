/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:00:32 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/29 18:33:04 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/ft_printf.h"

void 	prf_set_flag_m(char *data, char c, int len)
{
	int i;

	i = 0;
	while (data[i])
		BUFFER[J++] = data[i++];
	while (len--)
		BUFFER[J++] = c;
}

void 	prf_set_width(char *data, char c, int len)
{
	int i;


	i = 0;
	while (len--)
		BUFFER[J++] = c;

	while (data[i])
		BUFFER[J++] = data[i++];
}

// void 	prf_fill_data_test(char *data, int flag, int width, int len)
// {
// 	ft_putendl(data);
// 	ft_putnbr_bin(flag), ft_putchar('\n');
// 	ft_putnbrel(width);
//
// }
void	prf_set_flags_string(char *data, t_arg *arg, int len)
{
	char c;

	c = ' ';
	FLAG_Z ? c = '0' : 0;
	len = WIDTH - len;
	FLAG_M ? prf_set_flag_m(data, c, len) : prf_set_width(data, c, len);
}


void	prf_type_percent(t_arg *arg, va_list ap)
{
	t_data	data;
	int		len;

	(void)&ap;
	data.prc[0] = '%';
	data.prc[1] = 0;
	len = ft_strlen(data.prc);
	if (WIDTH <= len)
	{
		prf_fill_data(data.prc);
		return ;
	}

	FLAG &= TWO_FLAG;
	FLAG_M ? FLAG &= FLAG_M : 0;
	
	prf_set_flags_string(data.prc, arg, len);

	// FLAG_M ?  : prf_set_flag_m(data.prc);

	// prf_fill_data_test(data.prc, FLAG, WIDTH, len);

	// if (!(*len_buffer = prf_set_string(arg, &str, 's')))
	// 	*len_buffer = 1;
	//
	// return (str);
}
