/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_avl_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:41:30 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:55:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

/*
*      y           x 
*     / \         / \
*    x   C  <=>  A   y
*   / \             / \
*  A   B           B   C
*/
void	gc_avl_rotate(t_avl *t, t_i32 direction)
{
	t_avl	x;
	t_avl	y;
	t_avl	b;

	y = *t;
	x = y->child[direction];
	b = x->child[!direction];
	*t = x;
	x->child[!direction] = y;
	y->child[direction] = b;
	gc_avl_update_aggregate(y);
	gc_avl_update_aggregate(x);
}
