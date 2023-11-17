/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_insert.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:49:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:55:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

void	*mmanager_avltree_insert(t_avltree *t, void *data)
{
	t_avltree	new;

	if (*t == AVL_EMPTY)
	{
		new = malloc(sizeof(struct s_avltree));
		if (new == NULL)
			return (NULL);
		new->data = data;
		new->child[RIGHT] = AVL_EMPTY;
		new->child[LEFT] = AVL_EMPTY;
		*t = new;
	}
	else if ((*t)->data == data)
	{
		return (t);
	}
	else
	{
		if (mmanager_avltree_insert(&(*t)->child[(*t)->data < data], data) == NULL)
			return (NULL);
	}
	mmanager_avltree_update_aggregate(*t);
	mmanager_avltree_rebalance(t);
	return (t);
}
