/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbuffer_realloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 03:55:02 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/08 03:55:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbuffer.h"

void	dbuffer_realloc(t_dbuffer *dbuffer)
{
	t_u32		i;
	t_cstring	new_cstring;

	new_cstring = malloc(dbuffer->total * DBUFFER_REALLOC_FACTOR);
	if (new_cstring == NULL)
	{
		status_set(STATUS_PREDEFINED_EXIT);
	}
	i = 0;
	while (i < dbuffer->used)
	{
		new_cstring[i] = dbuffer->address[i];
	}
	free(dbuffer->address);
	dbuffer->address = new_cstring;
	status_set(STATUS_PREDEFINED_OK);
}
