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

NAME = fdf

# Map
MAP_HEADER = map/map.h
MAP_SOURCES = 
MAP_OBJECTS = 

# Program

# Vec3

# Window

SOURCES = main.c
OBJECTS = main.o ${MAP_OBJECTS}

all: $(NAME)

$(NAME): $(OBJECTS)
	cc  -o $(NAME) $(OBJECTS) minilibx-linux/libmlx.a -lXext -lX11

clean:

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
#	$(eval RESULT := $(shell cc -o ./memory.test.out tests/memory.test.c memory/*.c))
#	$(shell if [ $(RESULT) -eq 0 ] then printf "MEMORY:\tKO\n" else )
#	$(eval RESULT := $(shell valgrind --leak-check=full --error-exitcode=255 ./memory.test.out))

$(MEMORY_TEST): $(MEMORY_SOURCES)


.PHONY: all clean fclean re test