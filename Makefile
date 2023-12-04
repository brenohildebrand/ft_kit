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
	integer.h \
	memory.h \
	number.h \
	program.h \
	string.h
SOURCES = \
	buffer_copy.c \
	buffer_create.c \
	buffer_destroy.c \
	buffer_realloc.c \
	buffer_set.c \
	character_create.c \
	character_destroy.c \
	integer_add.c \
	integer_create.c \
	integer_destroy.c \
	integer_divide.c \
	integer_multiply.c \
	integer_print.c \
	integer_set.c \
	integer_subtract.c \
	memory_create.c \
	memory_destroy.c \
	number_add.c \
	number_create.c \
	number_destroy.c \
	number_divide.c \
	number_multiply.c \
	number_set.c \
	number_subtract.c \
	program.c \
	string_copy.c \
	string_create.c \
	string_destroy.c \
	string_realloc.c \
	string_set.c
OBJECTS = \
	buffer_copy.o \
	buffer_create.o \
	buffer_destroy.o \
	buffer_realloc.o \
	buffer_set.o \
	character_create.o \
	character_destroy.o \
	integer_add.o \
	integer_create.o \
	integer_destroy.o \
	integer_divide.o \
	integer_multiply.o \
	integer_print.o \
	integer_set.o \
	integer_subtract.o \
	memory_create.o \
	memory_destroy.o \
	number_add.o \
	number_create.o \
	number_destroy.o \
	number_divide.o \
	number_multiply.o \
	number_set.o \
	number_subtract.o \
	program.o \
	string_copy.o \
	string_create.o \
	string_destroy.o \
	string_realloc.o \
	string_set.o

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