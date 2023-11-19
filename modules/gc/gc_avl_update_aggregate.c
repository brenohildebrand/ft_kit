/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_avl_update_aggregate.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:53:44 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:56:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

void	gc_avl_update_aggregate(t_avl t)
{
	if (t != AVL_EMPTY)
	{
		t->height = gc_avl_compute_height(t);
		t->size = gc_avl_compute_size(t);
	}
}
