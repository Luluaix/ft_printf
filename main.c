/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:30:34 by philippe          #+#    #+#             */
/*   Updated: 2017/03/02 08:54:16 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "1/include/ft_printf.h"
#include <stdio.h>

int	main()
{
	char *str;

	str = ft_strdup("blablaz%%  hilasdf%s bla");
	// printf("blablaz%3d  hilasdf%s bla");
	ft_putendl("============");
	printf("blablawslasdf bla");
	ft_strdel(&str);
	return (0);
}
