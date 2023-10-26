/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rebalance_rmanager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:34:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/26 15:41:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/avltree.h"

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
	t_i32	taller_child;

	if (*t != AVL_EMPTY)
	{
		taller_child = 0;
		while (taller_child < 2)
		{
			if (get_rmanager_height((*t)->child[taller_child]) >= get_rmanager_height((*t)->child[!taller_child]) + 2)
			{
				if (get_rmanager_height((*t)->child[taller_child]->child[!taller_child])
						> get_rmanager_height((*t)->child[taller_child]->child[taller_child]))
				{
					rotate_rmanager(&(*t)->child[taller_child], !taller_child);
				}
				rotate_rmanager(t, taller_child);
				break;
			}
			taller_child++;
		}
	}
}