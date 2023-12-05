/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:16:29 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 11:16:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.h"

t_dmemory	dmemory_create(unsigned int size)
{
	t_dmemory	dmemory;

	dmemory = (t_dmemory)memory_create(sizeof(struct s_dmemory));
	dmemory->size = size;
	dmemory->address = (t_memory)memory_create(dmemory->size);
	return (dmemory);
}
