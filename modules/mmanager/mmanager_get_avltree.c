/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_get_avltree.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:02:20 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 18:02:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

t_avltree	*mmanager_get_avltree(void)
{
	static t_avltree	mmanager_avltree = AVL_EMPTY;
	
	return (&mmanager_avltree);
}
