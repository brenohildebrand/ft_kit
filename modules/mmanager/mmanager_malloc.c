/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_malloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:58:49 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 18:01:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

int	mmanager_smalloc(size_t size)
{
	void	*p;
	
	p = malloc(size);
	if (p != NULL)
		mmanager_avltree_insert(mmanager_get_avltree(), p);
	return (p);
}
