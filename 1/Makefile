# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/27 12:43:34 by pdamoune          #+#    #+#              #
#    Updated: 2017/03/27 12:53:27 by pdamoune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SOURCES	=	ft_printf.c \
			parsing.c \
			conversion.c \
			ft_set_string.c \
			prf_set_unsigned.c \
			ft_type_p.c \
			ft_type_c.c \
			ft_type_s.c \
			ft_type_d.c \
			ft_type_u.c \
			ft_type_x.c \
			ft_type_ux.c \
			ft_type_o.c \
			prf_lltoa_base.c
HEADERS	=	libft.h ft_printf.h
CFLAGS	=	-Wall -Wextra -Werror
CC		=	clang
PATHSRC =	src
PATHINC	=	include
PATHOBJ	=	obj
OBJETS	=	$(patsubst %.c,$(PATHOBJ)/%.o,$(SOURCES))

all: $(NAME)

$(PATHOBJ)/%.o: $(PATHSRC)/%.c
	@mkdir -p $(PATHOBJ)
	$(CC) $(CFLAGS) -I $(PATHINC) -c $< -o $@

$(NAME): $(OBJETS)
		@ar rc $(NAME) libft/obj/* $(OBJETS)
		@ranlib $(NAME)

clean:
		@rm -rf $(PATHOBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: clean, fclean, re, all
