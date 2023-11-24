/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:16:29 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 11:16:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"

t_buffer	buffer_create(unsigned int size)
{
	t_buffer	buffer;

	buffer = (t_buffer)memory_create(sizeof(struct s_buffer));
	buffer->address = (t_memory)memory_create(size);
	buffer->size = size;
	return (buffer);
}