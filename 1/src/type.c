/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:05:18 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/08 21:53:14 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** The conversion TYPE
**.
** A character that specifies the type of conversion to be applied.
**.
** d or i		The int argument is converted to signed decimal notation
**.
** o, u, x, X	The unsigned int argument is converted to unsigned octal (o),
** 			unsigned decimal (u), or unsigned hexadecimal (x and X) notation.
** 			The letters abcdef are used for x conversions;
** 			the letters ABCDEF are used for X conversions.
**.
** f, F		The double argument is rounded and converted to decimal notation
** 			in the style [-]ddd.ddd, where the number of digits after the
** 			decimal-point character is equal to the precision specification.
** 			If the precision is missing, it is taken as 6; if the precision
** 			is explicitly zero, no decimal-point character appears.
** 			If a decimal point appears, at least one digit appears before it.
**.
** e, E		The double argument is rounded and converted in the style
** 			[-]d.ddde±dd where there is one digit before the decimal-point
** 			character and the number of digits after it is equal to the
** 			precision; if the precision is missing, it is taken as 6;
** 			if the precision is zero, no decimal-point character appears.
** 			An E conversion uses the letter E (rather than e) to introduce
** 			the exponent. The exponent always contains at least two digits;
** 			if the value is zero, the exponent is 00.
**.
** g, G		The double argument is converted in style f or e
** 			(or F or E for G conversions). The precision specifies the number
** 			of significant digits. If the precision is missing, 6 digits are
** 			given; if the precision is zero, it is treated as 1. Style e
** 			is used if the exponent from its conversion is less than -4
** 			or greater than or equal to the precision. Trailing zeros are
** 			removed from the fractional part of the result; a decimal point
** 			appears only if it is followed by at least one digit.
**.
** c			If no l modifier is present, the int argument is converted to an
** 			unsigned char, and the resulting character is written. If an l
** 			modifier is present, the wint_t (wide character) argument is
** 			converted to a multibyte sequence by a call to the wcrtomb(3)
** 			function, with a conversion state starting in the initial state,
** 			and the resulting multibyte string is written.
**.
** s			If no l modifier is present: The const char * argument is expected
** 			to be a pointer to an array of character type (pointer to a string).
**  			Characters from the array are written up to (but not including) a
** 			terminating null byte ('\0'); if a precision is specified,
** 			no more than the number specified are written. If a precision
** 			is given, no null byte need be present; if the precision is not
** 			specified, or is greater than the size of the array, the array
** 			must contain a terminating null byte.
**.
** p			The void * pointer argument is printed in hexadecimal
** 			(as if by %#x or %#lx).
*/

char	g_type[15] = {"diouxXfeEgGcsp"};

int		type(t_form *form, char **str)
{
	// if (!(form->type =
	DEB
	if (!ft_strchr(g_type, **str) && !(form->type = 0))
		return (0);
	form->type = **str;
	(*str)++;
	return (1);
}
