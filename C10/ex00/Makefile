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

SRCS = main.c ft_puterr.c ft_display_file.c
OBJS = $(SRCS:.c=.o)

GFLAGS = -Wall -Wextra -Werror -I.
PRGNAME = ft_display_file

all: prg

prg: $(OBJS)
	gcc $(GFLAGS) $(OBJS) -o $(PRGNAME)

%.o: %.c ft.h
	gcc -c $(GFLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(PRGNAME)

.PHONY: all clean fclean