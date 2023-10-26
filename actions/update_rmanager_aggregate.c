/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_rmanager_aggregate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:25:58 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/avltree.h"

void	update_rmanager_aggregate(t_usize_avltree t)
{
	if (t != AVL_EMPTY)
	{
		t->height = compute_rmanager_height(t);
		t->size = compute_rmanager_size(t);
	}
}