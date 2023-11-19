/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_avl_rebalance.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:04:47 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:55:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

/**
 * The algorithm is:
 * 	- identify root
 * 	- identify taller child
 * 	- identify the problem (taller grandchild)
 * 	- if the problem is in the opposite granchild,
 * 	  rotate it above.
 * 	- rotate the taller child above.
*/

void	gc_avl_rebalance(t_avl	*t)
{
	t_i32		direction;
	t_avl	taller_child;

	if (*t != AVL_EMPTY)
	{
		direction = 0;
		while (direction < 2)
		{
			if (gc_avl_get_height((*t)->child[direction]) >= \
				gc_avl_get_height((*t)->child[!direction]) + 2)
			{
				taller_child = (*t)->child[direction];
				if (gc_avl_get_height(taller_child->child[!direction]) > \
					gc_avl_get_height(taller_child->child[direction]))
				{
					gc_avl_rotate(&(*t)->child[direction], !direction);
				}
				gc_avl_rotate(t, direction);
			}
			direction++;
		}
	}
}
