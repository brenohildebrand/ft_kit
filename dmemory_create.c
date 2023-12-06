/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:27:24 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:27:24 by bhildebr         ###   ########.fr       */
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
