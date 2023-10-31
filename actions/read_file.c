/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:02:43 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 13:29:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/file.h"
#include <fcntl.h>
#include <unistd.h>

void	read_file(t_file f, t_u8 *path)
{
	t_i32	fd;
	t_i32	available;
	t_i32	status;

	f->path = path;	
	fd = open(f->path, O_RDONLY);
	if (fd == -1)
		sexit(1);		
	while (1)
	{
		available = f->buffer->allocated_size - f->buffer->size;
		if (available == 0)
		{
			realloc_u8_vector(f->buffer);
			continue;
		}	
		status = read(fd, f->buffer->data + f->buffer->size, available);
		if (status == 0)
			break;
		else if (status == -1)
			sexit(1);
		else
			f->buffer->size += status;
	}
	push_u8_vector(f->buffer, '\0');
	close(fd);
}
