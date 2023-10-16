# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 12:49:07 by marvin            #+#    #+#              #
#    Updated: 2023/10/16 12:49:07 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFGLAGS = -Wall -Wextra -Werror

BUILD_DIR = ../../build
INCLUDES_DIR = ../../includes

LIB = libllist
STATIC_LIB = $(BUILD_DIR)/$(addsuffix .a, $(LIB))
SHARED_LIB = $(BUILD_DIR)/$(addsuffix .so, $(LIB))
INCLUDES = $(INCLUDES_DIR)/llist.h

FUNCTIONS = $(basename $(wildcard *.c))
SRCS = $(addsuffix .c, $(FUNCTIONS))
OBJS = $(addsuffix .o, $(FUNCTIONS))

all: $(STATIC_LIB) $(SHARED_LIB) $(INCLUDES)

$(STATIC_LIB): $(OBJS)
	mkdir -p $(BUILD_DIR)
	ar rcs $(STATIC_LIB) $(OBJS)

$(SHARED_LIB): $(OBJS)
	mkdir -p $(BUILD_DIR)
	gcc -shared -o $(SHARED_LIB) $(OBJS)

$(INCLUDES):
	cp llist.h $(INCLUDES_DIR)

%.o: %.c
	$(CC) -o $@ $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(STATIC_LIB) $(SHARED_LIB) $(INCLUDES)

re: fclean all

.PHONY: all clean fclean re