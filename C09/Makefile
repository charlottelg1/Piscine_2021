# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 12:27:26 by cle-gran          #+#    #+#              #
#    Updated: 2021/02/24 16:58:08 by cle-gran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(addprefix ${FOLDER}/, ft_putchar.c ft_strlen.c ft_swap.c ft_putstr.c ft_strcmp.c)
OBJS = ${SRCS:.c=.o}
HEADER = includes
FOLDER = srcs

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

all: ${NAME}

%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

