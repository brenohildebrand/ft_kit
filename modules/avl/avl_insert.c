/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_insert.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:49:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:55:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avl.h"

void	*avl_insert(t_avl *t, void *data)
{
	t_avl	new;

	if (*t == AVL_EMPTY)
	{
		new = gc_malloc(sizeof(struct s_avl));
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
		if (avl_insert(&(*t)->child[(*t)->data < data], data) == NULL)
			return (NULL);
	}
	avl_update_aggregate(*t);
	avl_rebalance(t);
	return (t);
}
