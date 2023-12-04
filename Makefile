# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 05:26:41 by marvin            #+#    #+#              #
#    Updated: 2023/11/21 05:26:41 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

HEADERS = \
	buffer.h \
	character.h \
	memory.h \
	number.h \
	program.h
SOURCES = \
	buffer_copy.c \
	buffer_create.c \
	buffer_destroy.c \
	buffer_realloc.c \
	buffer_set.c \
	character_create.c \
	character_destroy.c \
	memory_create.c \
	memory_destroy.c \
	number_divide.c \
	number_multiply.c \
	number_subtract.c \
	number_add.c \
	number_create.c \
	number_destroy.c \
	program.c
OBJECTS = \
	buffer_copy.o \
	buffer_create.o \
	buffer_destroy.o \
	buffer_realloc.o \
	buffer_set.o \
	character_create.o \
	character_destroy.o \
	memory_create.o \
	memory_destroy.o \
	number_add.o \
	number_create.o \
	number_destroy.o \
	number_divide.o \
	number_multiply.o \
	number_subtract.o \
	program.o

all: norm $(NAME)

norm:
	norminette $(HEADERS) $(SOURCES)

$(NAME): $(OBJECTS)
	cc -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all norm clean fclean re