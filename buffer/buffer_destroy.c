/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:19:02 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 11:19:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"

void	buffer_destroy(t_buffer buffer)
{
	buffer_set(buffer, 0);
	buffer->size = 0;
	memory_destroy(buffer->address);
	memory_destroy(buffer);
}