/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_update_aggregate.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:53:44 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:56:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avltree.h"

void	mmanager_avltree_update_aggregate(t_avltree t)
{
	if (t != AVL_EMPTY)
	{
		t->height = avltree_compute_height(t);
		t->size = avltree_compute_size(t);
	}
}
