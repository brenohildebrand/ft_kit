/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_delete.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:47:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:53:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avl.h"

void	avl_delete(t_avl *t, void *target)
{
	t_avl	to_free;

	if (*t != AVL_EMPTY)
	{
		if ((*t)->data == target)
		{
			gc_free((void *)(*t)->data);
			if ((*t)->child[RIGHT])
			{
				(*t)->data = avl_delete_min(&(*t)->child[RIGHT]);
			}
			else
			{
				to_free = *t;
				*t = to_free->child[LEFT];
				gc_free(to_free);
			}
		}
		else
		{
			avl_delete(&(*t)->child[(*t)->data < target], target);
		}
	}
}
