/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_rmanager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:04:45 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 15:28:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/rmanager.h"
#include <unistd.h>
#include <stdlib.h>

static void	rmanager_add(t_rmanager *rmanager, void *address)
{
	t_rmanager	*the_node_before;
	t_rmanager	*the_node_after;
	t_rmanager	*new_node;
	
	new_node = malloc(sizeof(t_rmanager));
	if (new_node == NULL)
	{
		write(1, "An error ocurred while mallocing.\n", 34);
		call_rmanager(2, NULL);
		exit(1);
	}
	new_node->address = address;
	new_node->next = NULL;

	// once it's created and initialized I need to insert it in some part of the list
	the_node_before = rmanager_get_first_smaller_node_than(rmanager, address);
	the_node_after = rmanager_get_first_greater_node_than(rmanager, address);

	the_node_before->next = new_node;
	new_node->next = the_node_after;
}

static t_rmanager	*rmanager_get_first_smaller_node_than(t_rmanager *rmanager, void *address)
{
	
}

/**
 * 0 - add
 * 1 - remove
*/
void	call_rmanager(int action, void *address)
{
	static t_rmanager	*rmanager = 0;

	if (action == 0)
		rmanager_add(rmanager, address);
	else if (action == 1)
		rmanager_delete(rmanager, address);
	else if (action == 2)
		rmanager_delete_all(rmanager);
}