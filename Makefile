# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 17:16:44 by bhildebr          #+#    #+#              #
#    Updated: 2023/11/16 11:03:50 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

NAME = libkit.a

ASSERT_DIR = ./modules/assert
ASSERT_SOURCES = $(ASSERT_DIR)/assert.c
ASSERT_OBJECTS = $(patsubst %.c, %.o, $(ASSERT_SOURCES))

BASIC_DIR = ./modules/basic
BASIC_SOURCES = 
BASIC_OBJECTS = $(patsubst %.c, %.o, $(BASIC_SOURCES))

STRING_DIR = ./modules/string
STRING_SOURCES = $(STRING_DIR)/string_print.c
STRING_OBJECTS = $(patsubst %.c, %.o, $(STRING_SOURCES))

all: $(NAME)

$(NAME): $(ASSERT_OBJECTS) $(BASIC_OBJECTS) $(STRING_OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(ASSERT_OBJECTS) $(BASIC_OBJECTS) $(STRING_OBJECTS)

fclean: clean
	$(RM) $(NAME)	

re: fclean all

.PHONY: $(NAME) clean fclean re 
