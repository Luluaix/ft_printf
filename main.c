/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:30:34 by philippe          #+#    #+#             */
/*   Updated: 2017/04/13 11:40:22 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "1/includes/ft_printf.h"
#include <stdio.h>
#define FLOAT 1

int	main()
{
	// double 	*ptr;
	// unsigned char	*c;
	// float	i;
	// int j;
	// int k;

	// ptr = ft_strdup("=====");
	// ft_putnbr_bin(0b11111111111111111111111111111111);
	// ft_putnbrel(printf("coucoucoucou\n"));
	ft_printf("debut|%+10.5d|fin", 123);
	ft_putendl("");
	ft_putnbrel(printf("debut|%f|fin", (1.2 * 10)));
	ft_putendl("");
	// i = 10.12345;
	// i = (10.12345 - (int)i) * 10000000;
	// printf("%p\n", ptr);
	// printf("%p\n", ptr + 195);
	// ft_putnbrel(*(ptr + 195));

	// printf("taille d'un float :  bytes\n");
	// printf("taille d'un double : %lu bytes\n", sizeof(double));
	// ft_putnbrel(i);
	// printf("%020000000u", 1);
	// ft_putnbrel(printf("\n%lls", "salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut|salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut", "===", 1000000000000));
	// ft_putnbrel(printf("debut% 10smilieu% 15pfin% 3%", "==", "===", 0));
	// ft_putnbrel(ft_printf("111|%.015d|333\n", 50));
	// ft_putnbrel(printf("\n| %% |%%|\n| %%-|%%|\n") + 1);
	// ft_putnbrel(printf("\n| c |%c|\n| c-|%20c|\n", 99, -50));
	// ft_putnbrel(printf("\n| C |%C|\n| C-|%20C|\n", 99, 0));
	// ft_putnbrel(printf("\n| s |%s|\n| s-|%20s|\n", "string", 0));
	// ft_putnbrel(printf("\n| S |%S|\n| S-|%20S|\n", L"STRING", 0));
	// ft_putnbrel(printf("\n| p |%p|\n| p-|%20p|\n", ptr, -50));
	// ft_putnbrel(printf("\n| d |%d|\n| d-|%20d|\n", 5, -50));
	// ft_putnbrel(printf("\n| o |%o|\n| o-|%20o|\n", 5, -50));
	// ft_putnbrel(printf("\n| u |%u|\n| u-|%20u|\n", 5, -50));
	// ft_putnbrel(printf("\n| x |%x|\n| x-|%20x|\n", 5, -50));
	// ft_putnbrel(printf("\n| X |%X|\n| X-|%20X|\n", 5, -50));
	// ft_putnbrel(printf("\n| a |%a|\n| a-|%20a|\n", 5., -50));
	// ft_putnbrel(printf("\n| A |%A|\n| A-|%20A|\n", 5., -50));
	// ft_putnbrel(printf("\n| e |%e|\n| e-|%20e|\n", 5., -50));
	// ft_putnbrel(printf("\n| E |%E|\n| E-|%20E|\n", 5., -50));
	// ft_putnbrel(printf("\n| f |%f|\n| f-|%20f|\n", 5., -50));
	// ft_putnbrel(printf("\n| F |%F|\n| F-|%20F|\n", 5., -50));
	// ft_putnbrel(printf("\n| g |%g|\n| g-|%20g|\n", 5., -50));
	// ft_putnbrel(printf("\n| G |%G|\n| G-|%20G|\n", 5., -50));


	// ft_putendl(ft_ulltoa_base((U L L)&i, 16));
	// ("debut|%p|fin\n\n", str);
	// printf("debut|%p|fin", str);
	// ft_putnbrel(str);
	// printf("\n\n%p\n", str);
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
	// ft_strdel(&ptr);
	return (0);
}
