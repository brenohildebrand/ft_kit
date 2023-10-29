/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rmanager_height.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:13:43 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:51:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/usize_avltree.h"

t_i32	get_rmanager_height(const t_usize_avltree t)
{
	if (t == AVL_EMPTY)
		return (AVL_EMPTY_HEIGHT);
	else
		return t->height;
}
