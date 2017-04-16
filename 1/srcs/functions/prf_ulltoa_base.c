/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_ulltoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 19:22:36 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/16 19:23:01 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	prf_ulltoa_base(char *result, unsigned long long n, unsigned int base)
{
	int			len;
	int			mod;

	len = 0;
	result[len] = '0';
	while (n > 0)
	{
		mod = n % base;
		mod = ABS(mod);
		result[len] = mod + '0';
		if (base >= 10)
			if (!ft_isdigit(result[len]))
				result[len] += 39;
		n /= base;
		len++;
	}
	ft_strrev(result);
}
