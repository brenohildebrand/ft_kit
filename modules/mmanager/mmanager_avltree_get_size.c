/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_get_size.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:30:43 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/17 12:30:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

t_u32	mmanager_avltree_get_size(const t_avltree t)
{
	if (t == AVL_EMPTY)
		return (0);
	else
		return (t->size);
}