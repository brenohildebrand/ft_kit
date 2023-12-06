/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:10:00 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:49:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_H
# define INTEGER_H

# include "memory.h"
# include "string.h"
# include "boolean.h"

typedef struct s_integer	*t_integer;

struct s_integer {
	int	value;	
};

void		integer_add(t_integer integer, t_integer another_integer);
t_integer	integer_copy(t_integer integer);
t_integer	integer_create(void);
void		integer_divide(t_integer integer, t_integer another_integer);
void		integer_multiply(t_integer integer, t_integer another_integer);
void		integer_negate(t_integer integer);
void		integer_destroy(t_integer integer);
void		integer_print(t_integer integer);
void		integer_set(t_integer integer, int value);
int			integer_get(t_integer integer);
void		integer_subtract(t_integer integer, t_integer another_integer);
int			integer_get_value(t_integer integer);
t_string	integer_to_string(t_integer integer);

#endif