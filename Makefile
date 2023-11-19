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

AVL_DIR = ./modules/avl
AVL_SOURCES = $(AVL_DIR)/avl_compute_height.c \
				  $(AVL_DIR)/avl_compute_size.c \
				  $(AVL_DIR)/avl_delete_min.c \
				  $(AVL_DIR)/avl_delete.c \
				  $(AVL_DIR)/avl_destroy.c \
				  $(AVL_DIR)/avl_get_height.c \
				  $(AVL_DIR)/avl_get_size.c \
				  $(AVL_DIR)/avl_init.c \
				  $(AVL_DIR)/avl_insert.c \
				  $(AVL_DIR)/avl_malloc.c \
				  $(AVL_DIR)/avl_rebalance.c \
				  $(AVL_DIR)/avl_rotate.c \
				  $(AVL_DIR)/avl_update_aggregate.c
AVL_OBJECTS = $(patsubst %.c, %.o, $(AVL_SOURCES))

BASIC_DIR = ./modules/basic
BASIC_SOURCES = 
BASIC_OBJECTS = $(patsubst %.c, %.o, $(BASIC_SOURCES))

GC_DIR = ./modules/gc
GC_SOURCES = $(GC_DIR)/gc_avl_compute_height.c \
				   $(GC_DIR)/gc_avl_compute_size.c \
				   $(GC_DIR)/gc_avl_delete_min.c \
				   $(GC_DIR)/gc_avl_delete.c \
				   $(GC_DIR)/gc_avl_destroy.c \
				   $(GC_DIR)/gc_avl_get_height.c \
				   $(GC_DIR)/gc_avl_get_size.c \
				   $(GC_DIR)/gc_avl_init.c \
				   $(GC_DIR)/gc_avl_insert.c \
				   $(GC_DIR)/gc_avl_malloc.c \
				   $(GC_DIR)/gc_avl_rebalance.c \
				   $(GC_DIR)/gc_avl_rotate.c \
				   $(GC_DIR)/gc_avl_update_aggregate.c \
				   $(GC_DIR)/gc_free_all.c \
				   $(GC_DIR)/gc_free.c \
				   $(GC_DIR)/gc_get_avl.c \
				   $(GC_DIR)/gc_malloc.c
GC_OBJECTS = $(patsubst %.c, %.o, $(GC_SOURCES))

STRING_DIR = ./modules/string
STRING_SOURCES = $(STRING_DIR)/string_print.c
STRING_OBJECTS = $(patsubst %.c, %.o, $(STRING_SOURCES))

all: $(NAME)

$(NAME): $(ASSERT_OBJECTS) $(AVL_OBJECTS) $(BASIC_OBJECTS) $(GC_OBJECTS) $(STRING_OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(ASSERT_OBJECTS) $(AVL_OBJECTS) $(BASIC_OBJECTS) $(GC_OBJECTS) $(STRING_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	norminette

test: $(NAME)
	@cc tests/avl.test.c libkit.a -o test; ./test; if [ $$? -eq "0" ]; then printf "AVL:\tOK\n"; else printf "AVL:\tKO\n"; fi
	@cc tests/basic.test.c libkit.a -o test; ./test; if [ $$? -eq "0" ]; then printf "BASIC:\tOK\n"; else printf "BASIC:\tKO\n"; fi
	@cc tests/gc.test.c libkit.a -o test; ./test; if [ $$? -eq "0" ]; then printf "GC:\tOK\n"; else printf "GC:\tKO\n"; fi

.PHONY: all clean fclean re norm test
