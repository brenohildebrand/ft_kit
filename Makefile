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
	memory_test.c \
	number_add.c \
	number_create.c \
	number_destroy.c \
	program_test.c \
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
	memory_test.o \
	number_add.o \
	number_create.o \
	number_destroy.o \
	program_test.o \
	program.o

all: norm $(NAME)

norm:
	@norminette $(HEADERS) $(SOURCES)

$(NAME): $(OBJECTS)
	@cc -o $(NAME) $(OBJECTS)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all norm clean fclean re