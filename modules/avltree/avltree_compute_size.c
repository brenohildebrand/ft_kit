/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avltree_compute_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:56:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 15:57:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avltree.h"

t_i32	avltree_compute_size(const t_avltree t)
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
			size += avltree_get_size(t->child[direction]);
			direction++;
		}
		return (size);
	}
}
