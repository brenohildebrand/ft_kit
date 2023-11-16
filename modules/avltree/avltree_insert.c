/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avltree_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:49:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 15:53:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avltree.h"

void	avltree_insert(t_avltree *t, void *data)
{
	t_avltree	new;

	if (*t == AVL_EMPTY)
	{
		new = malloc(sizeof(*new));
		if (new == (void *)0)
		{
			avltree_destroy(t);
			exit(1);
		}
		new->data = data;
		new->child[RIGHT] = AVL_EMPTY;
		new->child[LEFT] = AVL_EMPTY;
		*t = new;
	}
	else if ((*t)->data == data)
	{
		return ;
	}
	else
	{
		avltree_insert(&(*t)->child[(*t)->data < data], data);
	}
	avltree_update_aggregate(*t);
	avltree_rebalance(t);
}
