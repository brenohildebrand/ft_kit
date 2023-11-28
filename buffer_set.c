/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:26:29 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 16:26:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"

void	buffer_set(t_buffer buffer, unsigned char value)
{
	unsigned int	i;

	i = 0;
	while (i < buffer->size)
	{
		((unsigned char *)(buffer->address))[i] = value;
		i++;
	}
}
