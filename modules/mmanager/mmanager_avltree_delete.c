/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_delete.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:47:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:53:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

void	mmanager_avltree_delete(t_avltree *t, void *target)
{
	t_avltree	to_free;

	if (*t != AVL_EMPTY)
	{
		if ((*t)->data == target)
		{
			free((void *)(*t)->data);
			if ((*t)->child[RIGHT])
			{
				(*t)->data = mmanager_avltree_delete_min(&(*t)->child[RIGHT]);
			}
			else
			{
				to_free = *t;
				*t = to_free->child[LEFT];
				free(to_free);
			}
		}
		else
		{
			mmanager_avltree_delete(&(*t)->child[(*t)->data < target], target);
		}
	}
}
