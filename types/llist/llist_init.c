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

t_status	llist_init(t_llist *llist)
{
	t_status	status;

	llist->next = 0x0;
	status = mem_set(llist, llist->content_unit_size * llist->number_of_content_units);
	return (OK);
}