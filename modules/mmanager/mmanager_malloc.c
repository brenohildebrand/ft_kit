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

void	*mmanager_malloc(size_t size)
{
	void	*p;

	p = malloc(size);
	if (p != NULL)
	{
		if (mmanager_avltree_insert(mmanager_get_avltree(), p) == NULL)
		{
			free(p);
			return (NULL);
		}
	}
	return (p);
}
