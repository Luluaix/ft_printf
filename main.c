/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:30:34 by philippe          #+#    #+#             */
/*   Updated: 2017/03/23 06:42:14 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "1/include/ft_printf.h"
#include <stdio.h>

int	main()
{
	char 	*str;
	// char	c;
	int		i;

	str = ft_strdup("=====");
	// ft_putnbrel(printf("coucoucoucou\n"));
	ft_printf("debut|%10c|milieu|%+ 10s|milieu|%10p|fin", '+', "===", 123);
	printf("debut|%- 10c|-1-|%-+ 10s|-2-|%- 10p|-3-|%- 10d", '+', "===", 123, 1);

	// ft_putendl(ft_ulltoa_base((U L L)&i, 16));
	// ("debut|%p|fin\n", str);
	// printf("debut|%p|fin", str);
	// ft_putnbrel(str);
	// printf("\n%p\n", str);
	// ft_putnbrel(i);

	// printf("\n============ %   d ============= \n", 15);
	// printf("\n============ % - - - - d ============= \n", 15);
	// printf("\n============ %0d ============= \n", 15);
	// printf("\n============ %##### - + x ============= \n", 16);
	// printf("\n============  ============= \n", -15);
	// ft_putnbr_bin(10);
	// ft_strdel(&str);
	// ft_printf(str);
	i = 21;
	// ft_putnbr(printf("bla = %.10d", i));
	ft_strdel(&str);
	return (0);
}
