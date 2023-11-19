/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_destroy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:44:12 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:53:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avl.h"

void	avl_destroy(t_avl *t)
{
	t_i32	direction;

	if (*t != AVL_EMPTY)
	{
		direction = 0;
		while (direction < 2)
		{
			avl_destroy(&(*t)->child[direction]);
			direction++;
		}
		gc_free((void *)((*t)->data));
		gc_free(*t);
		*t = AVL_EMPTY;
	}
}
