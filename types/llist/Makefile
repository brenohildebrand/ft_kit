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

RM = rm -f

FUNCTIONS = \
	llist_create \
	llist_init \
	llist_malloc

SRCS = $(addsuffix .c, $(FUNCTIONS))
OBJS = $(addsuffix .o, $(FUNCTIONS))

all: libllist.a libllist.so

libllist.a: $(OBJS)
	ar rcs libllist.a $(OBJS)

libllist.so: $(OBJS)
	gcc -shared -o libllist.so $(OBJS)

%.o: %.c
	$(CC) -o $@ $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) libllist.a libllist.so

.PHONY: all clean fclean re