# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 11:09:14 by skarayil          #+#    #+#              #
#    Updated: 2025/04/02 11:09:38 by skarayil         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #


NAME			= bsq
CC			= gcc
RM			= rm -f
CFLAGS			= -Wall -Wextra -Werror -I include

SRC			= src/ft_util.c \
			  src/ft_create_map.c \
			  src/ft_get_matrix.c \
			  src/ft_process_map.c \
			  src/main.c

OBJS			= ${SRC:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
