/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avltree_get_height.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:47:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 15:48:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avltree.h"

t_i32	avltree_get_height(const t_avltree t)
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
