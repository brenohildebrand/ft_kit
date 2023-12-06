/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory_destroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:27:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:27:35 by bhildebr         ###   ########.fr       */
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
