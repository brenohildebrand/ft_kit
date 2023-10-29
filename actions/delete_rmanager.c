/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_rmanager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:57:56 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:51:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/usize_avltree.h"
#include <stdlib.h>

void	delete_rmanager(t_usize_avltree *t, t_usize target)
{
	t_usize_avltree	to_free;

	if (*t != AVL_EMPTY)
	{
		if ((*t)->data == target)
		{
			free((void *)(*t)->data);
			if ((*t)->child[RIGHT])
			{
				(*t)->data = delete_rmanager_min(&(*t)->child[RIGHT]);
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
			delete_rmanager(&(*t)->child[(*t)->data < target], target);
		}
	}
}
