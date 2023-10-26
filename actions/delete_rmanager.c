/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_rmanager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:57:56 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/26 16:03:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/avltree.h";

void	delete_rmanager(t_usize_avltree *t, t_usize target)
{
	t_usize_avltree	to_free;

	if (*t != AVL_EMPTY)
	{
		if ((*t)->data == target)
		{
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