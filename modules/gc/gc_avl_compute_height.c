/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_avl_compute_height.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:36:58 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 16:55:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

t_i32	gc_avl_compute_height(const t_avl t)
{
	t_i32	child_height;
	t_i32	max_child_height;
	t_i32	direction;

	if (t == AVL_EMPTY)
	{
		return (AVL_EMPTY_HEIGHT);
	}
	else
	{
		max_child_height = AVL_EMPTY_HEIGHT;
		direction = 0;
		while (direction < 2)
		{
			child_height = gc_avl_get_height(t->child[direction]);
			if (child_height > max_child_height)
				max_child_height = child_height;
			direction++;
		}
		return (max_child_height + 1);
	}	
}
