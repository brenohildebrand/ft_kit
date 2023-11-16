/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_destroy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:44:12 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:53:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avltree.h"

void	mmanager_avltree_destroy(t_avltree *t)
{
	t_i32	direction;

	if (*t != AVL_EMPTY)
	{
		direction = 0;
		while (direction < 2)
		{
			avltree_destroy(&(*t)->child[direction]);
			direction++;
		}
		free((void *)((*t->data)));
		free(*t);
		*t = AVL_EMPTY;
	}
}
