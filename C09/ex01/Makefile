# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 11:52:24 by skarayil          #+#    #+#              #
#    Updated: 2025/04/02 11:52:28 by skarayil         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

LNAME = libft.a
SDIR = srcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRCS = $(addprefix $(SDIR)/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
OBJS = $(SRCS:.c=.o)


all: $(LNAME)

$(LNAME): $(OBJS)
	ar -rcs $(LNAME) $(OBJS)

$(SDIR)/%.o: $(SDIR)/%.c ft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LNAME)

re: fclean all

.PHONY: all clean fclean re
