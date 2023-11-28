/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:31:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 16:31:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"

t_buffer	buffer_copy(t_buffer buffer)
{
	t_buffer		another_buffer;
	unsigned int	i;

	another_buffer = buffer_create(buffer->size);
	i = 0;
	while (i < buffer->size)
	{
		((unsigned char *)(another_buffer->address))[i] = \
			((unsigned char *)(buffer->address))[i];
		i++;
	}
	return (another_buffer);
}
