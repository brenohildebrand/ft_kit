/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_recreate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:33:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 16:33:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.h"

void	dmemory_realloc(t_dmemory dmemory, unsigned int new_size)
{
	t_memory		new_address;
	unsigned int	copy_until_this_index;

	new_address = memory_create(new_size);
	if (new_size >= dmemory->size)
		copy_until_this_index = dmemory->size;
	else
		copy_until_this_index = new_size;
	while (copy_until_this_index--)
		((unsigned char *)(new_address))[copy_until_this_index] = \
			((unsigned char *)(dmemory->address))[copy_until_this_index];
	memory_destroy(dmemory->address);
	dmemory->size = new_size;
	dmemory->address = new_address;
}
