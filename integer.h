/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:10:00 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 15:38:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_H
# define INTEGER_H

# include "memory.h"

typedef int	*t_integer;

void		integer_add(t_integer integer, t_integer another_integer);
t_integer	integer_create(void);
void		integer_divide(t_integer integer, t_integer another_integer);
void		integer_multiply(t_integer integer, t_integer another_integer);
void		integer_destroy(t_integer integer);
void		integer_print(t_integer integer);
void		integer_set(t_integer number, int value);
void		integer_subtract(t_integer integer, t_integer another_integer);

#endif