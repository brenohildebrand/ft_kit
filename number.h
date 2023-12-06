/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:45:25 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 15:45:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_H
# define NUMBER_H

# include "memory.h"

typedef struct s_number	*t_number;

struct s_number {
	double	value;
};

void		number_add(t_number number, t_number another_number);
t_number	number_create(void);
void		number_divide(t_number number, t_number another_number);
void		number_multiply(t_number number, t_number another_number);
void		number_negate(t_number number);
void		number_destroy(t_number number);
void		number_set(t_number number, double value);
void		number_subtract(t_number number, t_number another_number);

#endif