/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_rmanager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:08:39 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 17:30:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/avltree.h"
#include <unistd.h>

void	insert_rmanager(t_usize_avltree *t, t_usize data)
{
	if (*t == AVL_EMPTY)
	{
		*t = malloc(sizeof(struct s_usize_avlnode));
		if (*t == 0)
		{
			free_rmanager();
			exit(1);
		}
		(*t)->left = AVL_EMPTY;
		(*t)->right = AVL_EMPTY;
		(*t)->data = data;
		(*t)->height = 1;
	}
	else if (data == (*t)->data)
	{
		return;
	}
	else
	{
		if (data > (*t)->data)
			insert_rmanager(&(*t)->right, data);
		else
			insert_rmanager(&(*t)->left, data);
		rebalance_rmanager(t);
	}
}