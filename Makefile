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
	boolean.h \
	character.h \
	dmemory.h \
	integer.h \
	length.h \
	memory.h \
	number.h \
	program.h \
	size.h \
	string.h
SOURCES = \
	boolean_create.c \
	boolean_destroy.c \
	boolean_set.c \
	character_create.c \
	character_destroy.c \
	character_set.c \
	dmemory_copy.c \
	dmemory_create.c \
	dmemory_destroy.c \
	dmemory_realloc.c \
	dmemory_set.c \
	integer_add.c \
	integer_copy.c \
	integer_create.c \
	integer_destroy.c \
	integer_divide.c \
	integer_get_value.c \
	integer_multiply.c \
	integer_negate.c \
	integer_print.c \
	integer_set.c \
	integer_subtract.c \
	integer_to_string.c \
	length_create.c \
	length_destroy.c \
	length_zeroify.c \
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
	size_create.c \
	size_destroy.c \
	size_zeroify.c \
	string_append_character.c \
	string_append_string.c \
	string_copy.c \
	string_create.c \
	string_destroy.c \
	string_insert.c \
	string_prepend_character.c \
	string_prepend_string.c \
	string_print.c \
	string_realloc.c \
	string_set.c
OBJECTS = \
	boolean_create.o \
	boolean_destroy.o \
	boolean_set.o \
	character_create.o \
	character_destroy.o \
	character_set.o \
	dmemory_copy.o \
	dmemory_create.o \
	dmemory_destroy.o \
	dmemory_realloc.o \
	dmemory_set.o \
	integer_add.o \
	integer_copy.o \
	integer_create.o \
	integer_destroy.o \
	integer_divide.o \
	integer_get_value.o \
	integer_multiply.o \
	integer_negate.o \
	integer_print.o \
	integer_set.o \
	integer_subtract.o \
	integer_to_string.o \
	length_create.o \
	length_destroy.o \
	length_zeroify.o \
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
	size_create.o \
	size_destroy.o \
	size_zeroify.o \
	string_append_character.o \
	string_append_string.o \
	string_copy.o \
	string_create.o \
	string_destroy.o \
	string_insert.o \
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