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

void	buffer_recreate(t_buffer buffer, unsigned int new_size)
{
	t_memory		new_address;
	unsigned int	copy_until_this_index;

	new_address = memory_create(new_size);
	i = 0;
	if (new_size >= buffer->size)
		copy_until_this_index = buffer->size;
	else
		copy_until_this_index = new_size;
	while (copy_until_this_index--)
		((unsigned char *)(new_address))[i] = \
			((unsigned char *)(address))[i];
	memory_destroy(buffer->address);
	buffer->address = new_address;
	buffer->size = new_size;
}