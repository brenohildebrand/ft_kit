/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_usize_avltree.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:18:26 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 17:04:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/avltree.h"
#include <stdlib.h>

void	insert_usize_avltree(t_usize_avltree *t, t_usize data)
{
	if (*t == AVL_EMPTY) 
	{
		*t = malloc(sizeof(struct s_usize_avlnode));
		if (*t == NULL)
		{
			// free everything
		}
	}
}