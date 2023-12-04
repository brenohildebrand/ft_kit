/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:49:16 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 10:49:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_H
# define BUFFER_H

# include "memory.h"

typedef struct s_buffer	*t_buffer;

struct s_buffer {
	unsigned int	size;
	t_memory		address;
};

t_buffer	buffer_copy(t_buffer buffer);
t_buffer	buffer_create(unsigned int size);
void		buffer_destroy(t_buffer buffer);
void		buffer_realloc(t_buffer buffer, unsigned int new_size);
void		buffer_set(t_buffer buffer, unsigned char value);

#endif