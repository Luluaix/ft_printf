# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 11:25:43 by pdamoune          #+#    #+#              #
#    Updated: 2017/04/05 13:24:58 by fanie13          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SOURCES	=	ft_printf.c \
			prf_parsing.c \
			prf_display_pars.c \
			prf_conversion.c \
			functions/prf_set_padding.c \
			functions/prf_fill_data.c \
			functions/prf_lltoa_base.c \
			functions/prf_set_x.c \
			functions/prf_set_prefixe.c \
			functions/prf_fill_c.c \
			functions/prf_precision.c \
			conversions/prf_type_percent.c \
			conversions/prf_type_s.c \
			conversions/prf_type_c.c \
			conversions/prf_type_p.c \
			conversions/prf_type_d.c \
			conversions/prf_type_o.c \
			conversions/prf_type_x.c \
			conversions/prf_type_u.c
HEADERS	=	-I 1/$(PATHINC) -I $(PATHLIB)/include
CFLAGS	=	-Wall -Wextra -Werror -w
NOFLAGS =	-Wno-format
CC		=	clang
PATHLIB	=	1/libft
PATHSRC =	1/srcs
PATHINC	=	includes
PATHOBJ	=	1/obj
OBJETS	=	$(patsubst %.c,$(PATHSRC)/%.c,$(SOURCES))

all: $(NAME)

# $(PATHOBJ)/%.o: $(PATHSRC)/%.c
# 	@mkdir -p $(PATHOBJ)
# 	$(CC) $(CFLAGS) -I $(PATHINC) -c $< -o $@

$(NAME): library
		@$(CC) -o $(NAME) main.c $(OBJETS) $(PATHLIB)/libft.a $(HEADERS) $(CFLAGS)
		@./$(NAME)

noflag: $(NOFLAGS)

$(NOFLAGS): library
		@$(CC) -o $(NAME) main.c $(OBJETS) $(PATHLIB)/libft.a $(HEADERS) $(NOFLAGS)
		@./$(NAME)

lib:
		rm -rf 1/libft
		ln -s ~/Documents/42/projets_42/library 1/libft
		#git submodule update --init 1/libft

libp:
		@git pull $(PATHLIB)

library:
		@make -C $(PATHLIB)

clean:
		@rm -rf $(PATHOBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: lib, library, clean, fclean, re, all, $(NOFLAGS), $(NAME)
