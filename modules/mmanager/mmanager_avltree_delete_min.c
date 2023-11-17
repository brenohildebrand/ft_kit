/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_delete_min.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:50:37 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:53:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

void	*mmanager_avltree_delete_min(t_avltree *t)
{
	t_avltree	to_free;
	void		*retval;

	if ((*t)->child[LEFT])
	{
		retval = mmanager_avltree_delete_min(&(*t)->child[LEFT]);
	}
	else
	{
		to_free = *t;
		retval = to_free->data;
		*t = to_free->child[RIGHT];
		free(to_free);
	}
	mmanager_avltree_update_aggregate(*t);
	mmanager_avltree_rebalance(t);
	return (retval);
}
