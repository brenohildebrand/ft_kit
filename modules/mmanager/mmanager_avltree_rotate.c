/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:41:30 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:55:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

/*
*      y           x 
*     / \         / \
*    x   C  <=>  A   y
*   / \             / \
*  A   B           B   C
*/
void	mmanager_avltree_rotate(t_avltree *t, t_i32 direction)
{
	t_avltree	x;
	t_avltree	y;
	t_avltree	b;

	y = *t;
	x = y->child[direction];
	b = x->child[!direction];
	*t = x;
	x->child[!direction] = y;
	y->child[direction] = b;
	mmanager_avltree_update_aggregate(y);
	mmanager_avltree_update_aggregate(x);
}
