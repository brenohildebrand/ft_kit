# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 13:27:51 by marvin            #+#    #+#              #
#    Updated: 2023/10/16 13:27:51 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MODULES = \
	types/llist/ \

all: $(MODULES)

$(MODULES):
	$(MAKE) -C $@

clean:
	$(foreach dir, $(MODULES), $(MAKE) -C $(dir) clean;)

fclean:
	$(foreach dir, $(MODULES), $(MAKE) -C $(dir) fclean;)