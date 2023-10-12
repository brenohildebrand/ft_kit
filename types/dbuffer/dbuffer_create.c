/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbuffer_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 02:11:59 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/08 02:11:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbuffer.h"

static void	dbuffer_malloc(t_dbuffer **dbuffer_address)
{
	t_dbuffer	*dbuffer;

	dbuffer = (t_dbuffer *)malloc(sizeof(t_dbuffer));
	if (dbuffer == NULL)
	{
		status_set(STATUS_PREDEFINED_EXIT);
	}
	dbuffer->address = (t_usize)malloc(DBUFFER_INITIAL_SIZE);
	if (dbuffer->address == NULL)
	{
		free(dbuffer);
		status_set(STATUS_PREDEFINED_EXIT);
	}
	(*dbuffer_address) = dbuffer;
	status_set(STATUS_PREDEFINED_OK);
}

static void dbuffer_initialize(t_dbuffer *dbuffer)
{
	dbuffer->used = 0;
	dbuffer->total = DBUFFER_INITIAL_SIZE;
}

void	dbuffer_create(t_dbuffer **dbuffer_address)
{
	dbuffer_malloc(dbuffer_address);
	dbuffer_initialize(*dbuffer_address);
	status_set(STATUS_PREDEFINED_OK);
}
