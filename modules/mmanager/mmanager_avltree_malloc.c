/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager_avltree_malloc.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:29:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/17 15:29:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmanager.h"

void	*mmanager_avltree_malloc(void)
{
	t_avltree	t;

	t = malloc(sizeof(struct s_avltree));
	if (t == NULL)
		return (NULL);
	return (t);
}