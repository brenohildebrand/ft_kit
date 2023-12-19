MAKEFILE = '
NAME = #NAME

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

HEADERS = \
	#HEADERS
SOURCES = \
	#SOURCES
OBJECTS = \
	#OBJECTS

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

.PHONY: all norm clean fclean re'