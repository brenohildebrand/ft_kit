/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_avl_compute_size.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:56:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 16:55:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

t_i32	gc_avl_compute_size(const t_avl t)
{
	t_i32	size;
	t_i32	direction;

	if (t == AVL_EMPTY)
	{
		return (0);
	}
	else
	{
		size = 1;
		direction = 0;
		while (direction < 2)
		{
			size += gc_avl_get_size(t->child[direction]);
			direction++;
		}
		return (size);
	}
}
