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

t_status	u8_dbuffer_create(t_dbuffer **dbuffer_address)
{
	t_u8_dbuffer	*dbuffer;

	dbuffer = (t_u8_dbuffer *)malloc(sizeof(t_u8_dbuffer));
	if (dbuffer == 0x0)
		return (STATUS_KO);
	dbuffer->content = (t_u8 *)malloc(DBUFFER_INITIAL_TOTAL * sizeof(t_u8));
	if (dbuffer->content == NULL)
	{
		free(dbuffer);
		return (STATUS_KO);
	}
	(*dbuffer_address) = dbuffer;
	dbuffer->used = 0;
	dbuffer->total = DBUFFER_INITIAL_TOTAL;
	return (STATUS_OK);
}
