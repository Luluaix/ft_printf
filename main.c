/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:30:34 by philippe          #+#    #+#             */
/*   Updated: 2017/04/16 20:57:58 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "1/includes/ft_printf.h"
#include <stdio.h>
#include <wchar.h>
#include <limits.h>
#define FLOAT 1

void	ft_putfloat_bin(int n)
{
	int i;
	int sign;
	int expos;
	int mantis;

	sign = 0;
	expos = 0;
	mantis = 0;
	i = 31;
	(1 << i) & n ? sign = 1 : 0;
	while (i-- > 23)
		(1 << i) & n ? expos |= 1 << (i - 23): 0;
	while (i-- > 0)
		(1 << i) & n ? mantis |= 1 << i: 0;
	ft_putbin_base(sign, 1);
	ft_putnbrel(sign);
	ft_putbin_base(expos, 8);
	ft_putnbrel(expos);
	ft_putbin_base(mantis, 23);
	ft_putnbrel(mantis);
}


int	main()
{
	double 	*ptr;
	// unsigned char	*c;
	// float	i;
	// int j;
	// int k;
	// // unsigned char *pi;
	// char *pf;
	// int		*i;
	float	f = 5.12;
	//
	//
	//
	// // i = 256;
	// pf = (char *)&f;
	// *pf = 255;
	// i = (int *)pf;
// pf++;
	// pf++;
	// pf++;
	// float 	f;
	// int 	*ptr;
	// //
	// f = 0.1415;
	// ptr = (int *)(&f);
	// //
	// ft_putfloat_bin(*ptr);
	// ft_putnbr_bin();
	// pf--;
	// ft_putnbr_bin(*pf);
	// pf--;
	// ft_putnbr_bin(*pf);
	// pf--;
	// ft_putnbr_bin((int)*pf);

	// ptr = ft_strdup("=====");
	// ft_putnbr_bin(0b11111111111111111111111111111111);
	// ft_putnbrel(printf("coucoucoucou\n"));
	// ft_printf("debut|%*0.5p|fin\n", 15, 20);
	// printf("debut|%*0.5p|fin\n", 15, 20);
	// ft_printf("debut|% *.3d|fin\n", 15, -48);
	// printf("debut|% *.3d|fin\n", 15, -48);
	// // ft_putendl("");
	// ft_putnbrel(printf("debut|%p|fin", 0));
	// ft_putendl("");
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
	f = 5.5;
	// ft_putnbrel(ft_printf("111|%.015d|333\n", 50));
	// printf("========== %% ===========\n");
	// ft_putnbrel(printf("printf    = |%50%|\n"));
	// ft_putnbrel(ft_printf("ft_printf = |%%|\n"));
	// printf("========== s ===========\n");
	// clock_t time;
	// time = clock();
	// int i = 2147483647;
	// long l = 2147483647;
	// long long ll = 9223372036854775807;
	// char c = 0;
	// intmax_t im = 9223372036854775807;

	// while ((double)time/CLOCKS_PER_SEC < 15)
	// {
	//  time = clock();
	// //  ft_putnbrel((double)time/CLOCKS_PER_SEC);
	//  ft_printf("\n");
	//  ft_printf("%%\n");
	//  ft_printf("%d\n", 42);
	//  ft_printf("%d%d\n", 42, 41);
	//  ft_printf("%d%d%d\n", 42, 43, 44);
	//  ft_printf("%ld\n", l);
	//  ft_printf("%lld\n", ll);
	// //  ft_printf("%x %X %p %20.15d\n", 505, 505, &ll, 54321);
	// //  ft_printf("%-10d % d %+d %010d %hhd\n", 3, 3, 3, 1, c);
	// //  ft_printf("%jd %zd %u %o %#08x\n", im, (size_t)i, i, 40, 42);
	// //  ft_printf("%x %#X %S %s%s\n", 1000, 1000, L"ݗݜशব", "test", "test2");
	//  ft_printf("%s%s%s\n", "test", "test", "test");
	// //  ft_printf("%C\n", 15000);
	// }
	// ft_putnbrel(printf("printf    = |111%s333%s555|\n", "222", "444"));
	// ft_putnbrel(ft_printf("printf    = |111%s333%s555|\n", "222", "444"));
	// printf("========== S ===========\n");
	// // ft_putnbrel(printf("printf    = |%S|\n", L"\x82STRING"));
	// // ft_putnbrel(ft_printf("ft_printf = |%S|\n", L"STRING"));
	// printf("========== c ===========\n");
	// ft_putnbrel(printf("printf    = |%c|\n", 65));
	// ft_putnbrel(ft_printf("ft_printf = |%c|\n", 65));
	// printf("========== C ===========\n");
	// // // ft_putnbrel(ft_printf("\n========== C ===========\nft_printf = |%C|\n", 99));
	// printf("========== p ===========\n");
	ft_putnbrel(printf("%c", 0));
	ft_putnbrel(ft_printf("%c", 0));
	// printf("========== d ===========\n");
	// ft_putnbrel(printf("printf    = |%ld|\n", ULLONG_MAX + 1));
	// ft_putnbrel(ft_printf("ft_printf = |%ld|\n", ULLONG_MAX + 1));
	// printf("========== u ===========\n");
	// ft_putnbrel(printf("printf    = |%10u|\n", 1));
	// ft_putnbrel(ft_printf("ft_printf = |%10u|\n", 1));
	// printf("========== o ===========\n");
	// ft_putnbrel(printf("printf    = |%#lo|\n", 10));
	// ft_putnbrel(ft_printf("ft_printf = |%#lo|\n", 10));
	// printf("========== o ===========\n");
	// ft_putnbrel(printf("printf    = |%#O|\n", -5000000000000000000));
	// ft_putnbrel(ft_printf("ft_printf = |%#o|\n", -5000000000000000000));
	// ft_putnbrel(printf("\n========== u ===========\nprintf = |%u|\n", 5));
	// // ft_putnbrel(ft_printf("\n========== u ===========\nft_printf = |%u|\n", 5));
	// // ft_putnbrel(printf("\n========== U ===========\nprintf = |%u|\n", 5));
	// // // ft_putnbrel(ft_printf("\n========== U ===========\nft_printf = |%u|\n", 5));
	// printf("========== x ===========\n");
	// ft_putnbrel(printf("printf    = |%#x|\n", 0));
	// ft_putnbrel(ft_printf("ft_printf = |%#x|\n", 0));
	// printf("========== X ===========\n");
	// ft_putnbrel(printf("printf    = |%#X|\n", -500000000));
	// ft_putnbrel(ft_printf("ft_printf = |%#X|\n", -500000000));

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
	// i = 21;
	// ft_putnbr(printf("bla = %.10d", i));
	// ft_strdel(&ptr);
	return (0);
}
