/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_malloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:58:49 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 18:01:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

void	*gc_malloc(size_t size)
{
	void	*p;

	p = malloc(size);
	if (p != NULL)
	{
		if (gc_avl_insert(gc_get_avl(), p) == NULL)
		{
			free(p);
			return (NULL);
		}
	}
	return (p);
}
