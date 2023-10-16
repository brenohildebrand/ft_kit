/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:31:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 00:31:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "llist.h"

t_status	llist_init(
	t_llist *llist,
	t_u32	content_size
){
	t_status	status;

	llist->next = 0x0;
	llist->content_size = content_size;
	status = mem_zeroify(llist->content, llist->content_size);
	if (status == ko)
		return (ko);
	return (ok);
}