/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_rmanager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:08:39 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:14:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/usize_avltree.h"
#include <stdlib.h>

void	insert_rmanager(t_usize_avltree *t, t_usize data)
{
	t_usize_avltree	new;

	if (*t == AVL_EMPTY)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
		{
			destroy_rmanager(t);
			exit(1);
		}
		new->data = data;
		new->child[RIGHT] = AVL_EMPTY;
		new->child[LEFT] = AVL_EMPTY;
		*t = new;
	}
	else if ((*t)->data == data)
		return ;
	else
		insert_rmanager(&(*t)->child[(*t)->data < data], data);
	update_rmanager_aggregate(*t);
	rebalance_rmanager(t);
}
