/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rebalance_rmanager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:34:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:33:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/usize_avltree.h"

/**
 * The algorithm is:
 * 	- identify root
 * 	- identify taller child
 * 	- identify the problem (taller grandchild)
 * 	- if the problem is in the opposite granchild,
 * 	  rotate it above.
 * 	- rotate the taller child above.
*/

void	rebalance_rmanager(t_usize_avltree *t)
{
	t_i32			direction;
	t_usize_avltree	taller_child;

	if (*t != AVL_EMPTY)
	{
		direction = 0;
		while (direction < 2)
		{
			if (get_rmanager_height((*t)->child[direction]) >= \
				get_rmanager_height((*t)->child[!direction]) + 2)
			{
				taller_child = (*t)->child[direction];
				if (get_rmanager_height(taller_child->child[!direction]) > \
				get_rmanager_height(taller_child->child[direction]))
				{
					rotate_rmanager(&(*t)->child[direction], !direction);
				}
				rotate_rmanager(t, direction);
				break ;
			}
			direction++;
		}
	}
}
