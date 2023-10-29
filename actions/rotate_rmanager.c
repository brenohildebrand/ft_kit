/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rmanager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:52 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:52:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/usize_avltree.h"

/*
*      y           x 
*     / \         / \
*    x   C  <=>  A   y
*   / \             / \
*  A   B           B   C
*/
void	rotate_rmanager(t_usize_avltree *t, t_i32 direction)
{
	t_usize_avltree	x;
	t_usize_avltree	y;
	t_usize_avltree	b;

	y = *t;
	x = y->child[direction];
	b = x->child[!direction];
	
	*t = x;
	x->child[!direction] = y;
	y->child[direction] = b;

	update_rmanager_aggregate(y);
	update_rmanager_aggregate(x);
}
