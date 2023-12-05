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
	dmemory.h \
	character.h \
	integer.h \
	memory.h \
	number.h \
	program.h \
	string.h
SOURCES = \
	character_create.c \
	character_destroy.c \
	dmemory_copy.c \
	dmemory_create.c \
	dmemory_destroy.c \
	dmemory_realloc.c \
	dmemory_set.c \
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
	string_append_character.c \
	string_append_string.c \
	string_copy.c \
	string_create.c \
	string_destroy.c \
	string_prepend_character.c \
	string_prepend_string.c \
	string_print.c \
	string_realloc.c \
	string_set.c
OBJECTS = \
	character_create.o \
	character_destroy.o \
	dmemory_copy.o \
	dmemory_create.o \
	dmemory_destroy.o \
	dmemory_realloc.o \
	dmemory_set.o \
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
	string_append_character.o \
	string_append_string.o \
	string_copy.o \
	string_create.o \
	string_destroy.o \
	string_prepend_character.o \
	string_prepend_string.o \
	string_print.o \
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