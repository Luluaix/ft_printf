/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_lltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 10:30:58 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/31 12:39:00 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	prf_lltoa_base(char *result, long long n, unsigned int base)
{
	int			len;
	int			mod;

	len = 0;
	result[len] = '0';
	while (n > 0 || n < 0)
	{
		mod = ABS(n % base);
		result[len] = mod + '0';
		if (base >= 10)
			if (!ft_isdigit(result[len]))
				result[len] += 39;
		if (n / base == 0 && n < 0)
			result[len + 1] = '-';
		n /= base;
		len++;
	}
	ft_strrev(result);
}
