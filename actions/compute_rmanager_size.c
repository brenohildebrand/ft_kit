/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_rmanager_size.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:22:38 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/avltree.h"

t_i32	compute_rmanager_size(const t_usize_avltree t)
{
	t_i32	size;
	t_i32	direction;

	if (t == AVL_EMPTY)
		return (0);
	else
	{
		size = 1;
		direction = 0;
		while (direction < 2)
		{
			size += get_rmanager_size(t->child[direction]);
			direction++;
		}
		return (size);
	}
}