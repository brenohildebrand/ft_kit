/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_init.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:16:39 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/17 16:16:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

void	mmanager_avltree_init(t_avltree t)
{
	t->data = NULL;
	t->child[LEFT] = AVL_EMPTY;
	t->child[RIGHT] = AVL_EMPTY;
	t->height = AVL_EMPTY_HEIGHT;
	t->size = AVL_EMPTY_SIZE;
}