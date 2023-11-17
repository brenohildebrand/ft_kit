/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_rebalance.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:04:47 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:55:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

/**
 * The algorithm is:
 * 	- identify root
 * 	- identify taller child
 * 	- identify the problem (taller grandchild)
 * 	- if the problem is in the opposite granchild,
 * 	  rotate it above.
 * 	- rotate the taller child above.
*/

void	mmanager_avltree_rebalance(t_avltree	*t)
{
	t_i32		direction;
	t_avltree	taller_child;

	if (*t != AVL_EMPTY)
	{
		direction = 0;
		while (direction < 2)
		{
			if (mmanager_avltree_get_height((*t)->child[direction]) >= \
				mmanager_avltree_get_height((*t)->child[!direction]) + 2)
			{
				taller_child = (*t)->child[direction];
				if (mmanager_avltree_get_height(taller_child->child[!direction]) > \
					mmanager_avltree_get_height(taller_child->child[direction]))
				{
					mmanager_avltree_rotate(&(*t)->child[direction], !direction);
				}
				mmanager_avltree_rotate(t, direction);
			}
			direction++;
		}
	}
}
