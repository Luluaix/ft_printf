# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 11:25:43 by pdamoune          #+#    #+#              #
#    Updated: 2017/03/21 15:48:21 by pdamoune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# **************************************************************************** #

NAME	=	ft_printf
SOURCES	=	ft_printf.c \
			parsing.c \
			conversion.c \
			color.c \
			display_struct.c \
			ft_set_string.c \
			ft_type_a.c \
			ft_type_f.c \
			ft_type_p.c \
			ft_type_ue.c \
			ft_type_ux.c \
			ft_type_c.c \
			ft_type_g.c \
			ft_type_s.c \
			ft_type_uf.c \
			ft_type_x.c \
			ft_type_d.c \
			ft_type_i.c \
			ft_type_u.c \
			ft_type_ug.c \
			ft_type_e.c \
			ft_type_o.c \
			ft_type_ua.c \
			ft_type_us.c
HEADERS	=	-I 1/$(PATHINC) -I $(PATHLIB)/$(PATHINC)
CFLAGS	=	-Wall -Wextra -Werror -w -g3
NOFLAGS =	-Wno-format
CC		=	clang
PATHLIB	=	1/libft
PATHSRC =	1/src
PATHINC	=	include
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
