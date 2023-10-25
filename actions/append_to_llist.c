/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_to_llist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:14:56 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 14:21:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/llist.h"

void	append_to_llist(t_llist *llist, void *pointer)
{
	while (llist->metadata.next != 0)
		llist = llist->metadata.next;
	llist->data = pointer;
	llist->metadata.next = 0;
}