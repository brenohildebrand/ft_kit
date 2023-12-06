/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:27:09 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:27:09 by bhildebr         ###   ########.fr       */
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
