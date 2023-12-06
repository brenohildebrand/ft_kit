/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_realloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:27:43 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:27:43 by bhildebr         ###   ########.fr       */
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
