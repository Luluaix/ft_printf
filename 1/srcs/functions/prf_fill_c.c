/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_fill_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanie13 <fanie13@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 13:18:39 by fanie13           #+#    #+#             */
/*   Updated: 2017/04/05 18:37:22 by fanie13          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void 	prf_fill_c(t_arg *arg, char **data, int c)
{
	(void)&data;
	BUFFER[J] = c;
	J++;
	WIDTH--;
	if (J == SIZE_BUF)
	{
		RET += J;
		J = 0;
		write(1, BUFFER, SIZE_BUF);
	}
}
