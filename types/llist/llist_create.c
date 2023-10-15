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
	t_llist	**llist_address,
	t_u32	size_of_content
)
{
	t_llist		*llist;
	t_status	status;

	status = llist_malloc(llist_address, size_of_content);
	if (status.code == e_status_code_ko)
		return (KO);
	status = llist_init(*llist_address);
	if (status.code == e_status_code_ko)
		return (KO);
	return (OK);
}

t_status	llist_create(t_usize address)
{
	t_llist *llist;
	t_llist **address_to_llist;

	address_to_llist = (t_llist **)address;
	
	return (OK);
}