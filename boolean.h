/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boolean.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:14:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 11:28:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOLEAN_H
# define BOOLEAN_H

# include "memory.h"

# define TRUE 1
# define FALSE 0

typedef struct s_boolean	*t_boolean;

struct s_boolean {
	int	value;
};

t_boolean	boolean_create(void);
void		boolean_destroy(t_boolean boolean);
void		boolean_set(t_boolean boolean, int value);

#endif