/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:06:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 16:06:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DMEMORY_H
# define DMEMORY_H

# include "memory.h"

typedef struct s_dmemory	*t_dmemory;

struct s_dmemory {
	unsigned int	size;
	t_memory		address;
};

t_dmemory	dmemory_copy(t_dmemory dmemory);
t_dmemory	dmemory_create(unsigned int size);
void		dmemory_destroy(t_dmemory dmemory);
void		dmemory_realloc(t_dmemory dmemory, unsigned int new_size);
void		dmemory_set(t_dmemory dmemory, unsigned char value);

#endif