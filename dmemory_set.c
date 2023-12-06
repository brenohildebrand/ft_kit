/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:27:56 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:27:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.h"

void	dmemory_set(t_dmemory dmemory, unsigned char value)
{
	unsigned int	i;

	i = 0;
	while (i < dmemory->size)
	{
		((unsigned char *)(dmemory->address))[i] = value;
		i++;
	}
}
