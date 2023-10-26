/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_rmanager_height.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:15:54 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/26 15:20:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/avltree.h"

t_i32	compute_rmanager_height(const t_usize_avltree t)
{
	t_i32	child_height;
	t_i32	max_child_height;
	t_i32	direction;

	if (t == AVL_EMPTY)
		return (AVL_EMPTY_HEIGHT);
	else
	{
		max_child_height = AVL_EMPTY_HEIGHT;
		direction = 0;
		while (direction < 2)
		{
			child_height = get_rmanager_height(t->child[direction]);
			if (child_height > max_child_height)
				max_child_height = child_height;
			direction++;
		}
		return (max_child_height + 1);
	}
}