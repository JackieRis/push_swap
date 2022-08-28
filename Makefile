# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:26:21 by tnguyen-          #+#    #+#              #
#    Updated: 2022/01/12 01:55:12 by tnguyen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS	= main.c ft_atoi.c commande.c ft_split.c utils.c ft_strlen.c ft_calloc.c \
	ft_bzero.c ft_memset.c ft_isdigit.c ft_strlcpy.c  ft_putstr_fd.c ft_strncmp.c \
	utils2.c commande2.c algo.c ft_sort_int_tab.c ft_memcpy.c fetch_range.c \
	algo2.c

OBJ	= ${SRCS:.c=.o}

CC = gcc

FLAGS = -Wall -Werror -Wextra -O3 -I. -fno-builtin

all: ${NAME}

%.o:%.c push_swap.h
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJ}
	$(CC) ${FLAGS} $(OBJ) -o $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
