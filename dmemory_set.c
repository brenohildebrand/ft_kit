/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:26:29 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 16:26:29 by marvin           ###   ########.fr       */
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
