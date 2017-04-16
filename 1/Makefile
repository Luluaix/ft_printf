# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 18:34:34 by pdamoune          #+#    #+#              #
#    Updated: 2017/04/16 20:07:05 by pdamoune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# **************************************************************************** #

NAME	=	libftprintf.a
SOURCES	=	srcs/ft_printf.c \
		srcs/prf_parsing.c \
		srcs/prf_display_pars.c \
		srcs/prf_conversion.c \
		srcs/functions/prf_set_padding.c \
		srcs/functions/prf_fill_data.c \
		srcs/functions/prf_lltoa_base.c \
		srcs/functions/prf_ulltoa_base.c \
		srcs/functions/prf_set_arg.c \
		srcs/functions/prf_set_x.c \
		srcs/functions/prf_set_prefixe.c \
		srcs/functions/prf_fill_c.c \
		srcs/functions/prf_precision.c \
		srcs/conversions/prf_type_percent.c \
		srcs/conversions/prf_type_s.c \
		srcs/conversions/prf_type_c.c \
		srcs/conversions/prf_type_p.c \
		srcs/conversions/prf_type_d.c \
		srcs/conversions/prf_type_o.c \
		srcs/conversions/prf_type_x.c \
		srcs/conversions/prf_type_u.c \
		libft/src/ft_atoi.c \
		libft/src/ft_bzero.c \
		libft/src/ft_count_c_words.c \
		libft/src/ft_isalnum.c \
		libft/src/ft_isalpha.c \
		libft/src/ft_isascii.c \
		libft/src/ft_isblank.c \
		libft/src/ft_isdigit.c \
		libft/src/ft_islower.c \
		libft/src/ft_isprint.c \
		libft/src/ft_isspace.c \
		libft/src/ft_isupper.c \
		libft/src/ft_isxdigit.c \
		libft/src/ft_itoa.c \
		libft/src/ft_lstadd.c \
		libft/src/ft_lstdel.c \
		libft/src/ft_lstdelone.c \
		libft/src/ft_lstiter.c \
		libft/src/ft_lstmap.c \
		libft/src/ft_lstnew.c \
		libft/src/ft_memalloc.c \
		libft/src/ft_memccpy.c \
		libft/src/ft_memchr.c \
		libft/src/ft_memcmp.c \
		libft/src/ft_memcpy.c \
		libft/src/ft_memdel.c \
		libft/src/ft_memmove.c \
		libft/src/ft_memset.c \
		libft/src/ft_putchar.c \
		libft/src/ft_putchar_fd.c \
		libft/src/ft_putendl.c \
		libft/src/ft_putendl_fd.c \
		libft/src/ft_putnbr.c \
		libft/src/ft_putnbr_fd.c \
		libft/src/ft_putstr.c \
		libft/src/ft_putstr_fd.c \
		libft/src/ft_sort_params.c \
		libft/src/ft_sqrt.c \
		libft/src/ft_strcat.c \
		libft/src/ft_strchr.c \
		libft/src/ft_strclr.c \
		libft/src/ft_strcmp.c \
		libft/src/ft_strcpy.c \
		libft/src/ft_strctrim.c \
		libft/src/ft_strdel.c \
		libft/src/ft_strdup.c \
		libft/src/ft_strequ.c \
		libft/src/ft_striter.c \
		libft/src/ft_striteri.c \
		libft/src/ft_strjoin.c \
		libft/src/ft_strlcat.c \
		libft/src/ft_strlen.c \
		libft/src/ft_strmap.c \
		libft/src/ft_strmapi.c \
		libft/src/ft_strncat.c \
		libft/src/ft_strncmp.c \
		libft/src/ft_strncpy.c \
		libft/src/ft_strnequ.c \
		libft/src/ft_strnew.c \
		libft/src/ft_strnstr.c \
		libft/src/ft_strrchr.c \
		libft/src/ft_strrev.c \
		libft/src/ft_strsplit.c \
		libft/src/ft_strstr.c \
		libft/src/ft_strsub.c \
		libft/src/ft_strtrim.c \
		libft/src/ft_swap.c \
		libft/src/ft_tolower.c \
		libft/src/ft_toupper.c \
		libft/src/ft_count_occur.c \
		libft/src/ft_conv_bin.c \
		libft/src/ft_strdift.c \
		libft/src/ft_sqrt_min.c \
		libft/src/ft_strcstr.c \
		libft/src/ft_putnbrel.c \
		libft/src/ft_memrealloc.c \
		libft/src/ft_lst_find.c \
		libft/src/ft_displaytab.c \
		libft/src/ft_tabdel.c \
		libft/src/ft_strcsplit.c \
		libft/src/ft_putnbr_bin.c \
		libft/src/ft_ulltoa_base.c \
		libft/src/ft_lltoa_base.c \
		libft/src/ft_putaddr.c \
		libft/src/ft_strtoupper.c \
		libft/src/ft_putbin_base.c
HEADERS	=	libft.h
CFLAGS	=	-Wall -Wextra -Werror
CC		=	clang
PATHSRC =
PATHINC	=	includes
PATHOBJ	=	obj
OBJETS	=	$(patsubst %.c,$(PATHOBJ)/%.o,$(SOURCES))

all: $(NAME)

$(PATHOBJ)/%.o: %.c
	@mkdir -p $(PATHOBJ)
	@mkdir -p $(PATHOBJ)/srcs
	@mkdir -p $(PATHOBJ)/srcs/functions
	@mkdir -p $(PATHOBJ)/srcs/conversions
	@mkdir -p $(PATHOBJ)/libft
	@mkdir -p $(PATHOBJ)/libft/src
	$(CC) $(CFLAGS) -I $(PATHINC) -I libft/include/$(HEADERS) -c $< -o $@

$(NAME): $(OBJETS)
		@ar rc $(NAME) $(OBJETS)
		@ranlib $(NAME)

clean:
		@rm -rf $(PATHOBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: clean, fclean, re, all, $(NAME)
