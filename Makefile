# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 11:25:43 by pdamoune          #+#    #+#              #
#*   Updated: 2017/03/07 20:04:20 by philippedamoune  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME	=	ft_printf
SOURCES	=	ft_printf.c parsing.c color.c flags.c width.c precision.c \
modifier.c type.c
HEADERS	=	-I 1/$(PATHINC) -I $(PATHLIB)/$(PATHINC)
CFLAGS	=	-Wall -Wextra -Werror -g
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
		@$(CC) -o $(NAME) main.c $(OBJETS) $(PATHLIB)/libft.a $(HEADERS) -g
		@./$(NAME)

lib:
		git submodule update --init 1/libft

library:
		@make -C $(PATHLIB)

clean:
		@rm -rf $(PATHOBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: lib, library, clean, fclean, re, all, $(NAME)
