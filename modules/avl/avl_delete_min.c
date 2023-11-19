/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_delete_min.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:50:37 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:53:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avl.h"

void	*avl_delete_min(t_avl *t)
{
	t_avl	to_free;
	void		*retval;

	if ((*t)->child[LEFT])
	{
		retval = avl_delete_min(&(*t)->child[LEFT]);
	}
	else
	{
		to_free = *t;
		retval = to_free->data;
		*t = to_free->child[RIGHT];
		free(to_free);
	}
	avl_update_aggregate(*t);
	avl_rebalance(t);
	return (retval);
}
