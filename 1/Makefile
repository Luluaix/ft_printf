# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 11:25:43 by pdamoune          #+#    #+#              #
#    Updated: 2017/02/22 22:37:00 by philippedamoune  ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_printf
SOURCES	=	main.c $(PATHLIB)/libft.a
HEADERS	=	-I $(PATHLIB)/$(PATHINC)
CFLAGS	=	-Wall -Wextra -Werror
CC		=	clang
PATHLIB	=	libft
PATHSRC =	src
PATHINC	=	include
PATHOBJ	=	obj
OBJETS	=	$(patsubst %.c,$(PATHSRC)/%.c,$(SOURCES))

all: $(NAME)

# $(PATHOBJ)/%.o: $(PATHSRC)/%.c
# 	@mkdir -p $(PATHOBJ)
# 	$(CC) $(CFLAGS) -I $(PATHINC) -c $< -o $@

$(NAME): library
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJETS) $(HEADERS)
		./$(NAME)

lib:
		rm -rf libft
		ln -s ~/Documents/42/projets_42/library libft

library:
		@make -C libft/

clean:
		@rm -rf $(PATHOBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: lib, library, clean, fclean, re, all, $(NAME)
