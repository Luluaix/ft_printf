/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:12:12 by philippe          #+#    #+#             */
/*   Updated: 2017/03/01 16:50:26 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		parsing(const char *str)
{
	char **tab;

	tab = ft_strcsplit(str, '%');
	ft_displaytab(tab);
	DEB
	ft_tabdel(tab);
	return (0);
}
