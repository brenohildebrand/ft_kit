/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_get_height.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:47:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 17:54:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

t_i32	mmanager_avltree_get_height(const t_avltree t)
{
	if (t == AVL_EMPTY)
	{
		return (AVL_EMPTY_HEIGHT);
	}
	else
	{
		return (t->height);
	}
}
