# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 17:16:44 by bhildebr          #+#    #+#              #
#    Updated: 2023/11/16 11:28:02 by bhildebr         ###   ########.fr        #
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

MMANAGER_DIR = ./modules/mmanager
MMANAGER_SOURCES = $(MMANAGER_DIR)/mmanager_avltree_compute_height.c \
				   $(MMANAGER_DIR)/mmanager_avltree_compute_size.c \
				   $(MMANAGER_DIR)/mmanager_avltree_delete_min.c \
				   $(MMANAGER_DIR)/mmanager_avltree_delete.c \
				   $(MMANAGER_DIR)/mmanager_avltree_destroy.c \
				   $(MMANAGER_DIR)/mmanager_avltree_get_height.c \
				   $(MMANAGER_DIR)/mmanager_avltree_get_size.c \
				   $(MMANAGER_DIR)/mmanager_avltree_init.c \
				   $(MMANAGER_DIR)/mmanager_avltree_insert.c \
				   $(MMANAGER_DIR)/mmanager_avltree_malloc.c \
				   $(MMANAGER_DIR)/mmanager_avltree_rebalance.c \
				   $(MMANAGER_DIR)/mmanager_avltree_rotate.c \
				   $(MMANAGER_DIR)/mmanager_avltree_update_aggregate.c \
				   $(MMANAGER_DIR)/mmanager_free_all.c \
				   $(MMANAGER_DIR)/mmanager_free.c \
				   $(MMANAGER_DIR)/mmanager_get_avltree.c \
				   $(MMANAGER_DIR)/mmanager_malloc.c
MMANAGER_OBJECTS = $(patsubst %.c, %.o, $(MMANAGER_SOURCES))

STRING_DIR = ./modules/string
STRING_SOURCES = $(STRING_DIR)/string_print.c
STRING_OBJECTS = $(patsubst %.c, %.o, $(STRING_SOURCES))

all: $(NAME)

$(NAME): $(ASSERT_OBJECTS) $(BASIC_OBJECTS) $(MMANAGER_OBJECTS) $(STRING_OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(ASSERT_OBJECTS) $(BASIC_OBJECTS) $(MMANAGER_OBJECTS) $(STRING_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norminette:
	norminette

test: $(NAME)
	@printf "[RUNNING TESTS]\n"
	@cc tests/mmanager.test.c libkit.a -o test; ./test; if [ $$? -eq "0" ]; then printf "MMANAGER: OK\n"; else printf "MMANAGER: KO\n"; fi

.PHONY: all clean fclean re norminette test
