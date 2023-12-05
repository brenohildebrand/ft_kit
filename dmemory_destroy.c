/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:19:02 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 11:19:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.h"

void	dmemory_destroy(t_dmemory dmemory)
{
	dmemory_set(dmemory, 0);
	dmemory->size = 0;
	memory_destroy(dmemory->address);
	memory_destroy(dmemory);
}
