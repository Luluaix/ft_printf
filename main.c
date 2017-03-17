/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:30:34 by philippe          #+#    #+#             */
/*   Updated: 2017/03/17 06:12:59 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "1/include/ft_printf.h"
#include <stdio.h>

int	main()
{
	char *str;
	int	i;

	str = ft_strdup("%20.50sblabla");
	ft_printf("debut|%p|fin", "bla");
	printf("debut|%p|fin", "bla");
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
