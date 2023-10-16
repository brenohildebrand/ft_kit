/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:14:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 17:14:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "llist.h"

t_status	llist_create(
	t_llist	**address,
	t_u32	content_size
)
{
	t_status	status;

	status = llist_malloc(address, content_size);
	if (status == ko)
		return (ko);
	status = llist_init(*address, content_size);
	if (status == ko)
		return (ko);
	return (ok);
}
