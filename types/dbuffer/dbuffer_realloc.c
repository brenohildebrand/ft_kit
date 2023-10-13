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

t_status	dbuffer_realloc(t_dbuffer *dbuffer)
{
	t_u32		i;
	t_dbuffer	*new_dbuffer;

	new_dbuffer = malloc(dbuffer->total * DBUFFER_REALLOC_FACTOR);
	if (new_dbuffer == 0x0)
		return(STATUS_KO);
	i = 0;
	while (i < dbuffer->used)
	{
		new_dbuffer->content[i] = dbuffer->content[i];
	}
	free(dbuffer->content);
	dbuffer = new_dbuffer;
	return (STATUS_OK);
}
