/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:31:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 16:31:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.h"

t_dmemory	dmemory_copy(t_dmemory dmemory)
{
	t_dmemory		another_dmemory;
	unsigned int	i;

	another_dmemory = dmemory_create(dmemory->size);
	i = 0;
	while (i < dmemory->size)
	{
		((unsigned char *)(another_dmemory->address))[i] = \
			((unsigned char *)(dmemory->address))[i];
		i++;
	}
	return (another_dmemory);
}
