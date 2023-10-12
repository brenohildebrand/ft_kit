# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 15:56:51 by bhildebr          #+#    #+#              #
#    Updated: 2023/10/07 15:56:51 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cstring: cstring.a

cstring.a: cstring_create.o
	ar rcs cstring.a cstring_create.o

cstring_create.o: cstring_create.c
	cc cstring_create.c -o cstring_create.o

.PHONY: cstring