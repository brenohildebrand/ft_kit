/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_compute_size.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:56:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 16:55:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

t_i32	mmanager_avltree_compute_size(const t_avltree t)
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
			size += mmanager_avltree_get_size(t->child[direction]);
			direction++;
		}
		return (size);
	}
}
