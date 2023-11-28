/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_recreate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:33:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 16:33:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"

void	buffer_realloc(t_buffer buffer, unsigned int new_size)
{
	t_memory		new_address;
	unsigned int	copy_until_this_index;

	new_address = memory_create(new_size);
	if (new_size >= buffer->size)
		copy_until_this_index = buffer->size;
	else
		copy_until_this_index = new_size;
	while (copy_until_this_index--)
		((unsigned char *)(new_address))[copy_until_this_index] = \
			((unsigned char *)(buffer->address))[copy_until_this_index];
	memory_destroy(buffer->address);
	buffer->size = new_size;
	buffer->address = new_address;
}
