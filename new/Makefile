# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 11:25:43 by pdamoune          #+#    #+#              #
#    Updated: 2017/03/29 18:28:01 by pdamoune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SOURCES	=	ft_printf.c \
			prf_parsing.c \
			prf_display_pars.c \
			prf_conversion.c \
			prf_fill_data.c \
			prf_type_s.c \
			prf_type_percent.c
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
