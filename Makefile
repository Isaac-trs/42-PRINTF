# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: istripol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/13 15:13:15 by istripol          #+#    #+#              #
#    Updated: 2024/04/25 02:09:39 by istripol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./Libft

SRCS = 	ft_printf.c \
	print_string.c \
	print_char.c \
	print_int.c \
	print_hex.c \
	print_unsigned.c \

OBJS = $(SRCS:.c=.o)

.c.o	:
	$(CC) $(CFLAGS)  -I ./ -c $< -o ${<:.c=.o}

.PHONY : all, makelibft, clean, fclean, re

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean

fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean

re: fclean all
