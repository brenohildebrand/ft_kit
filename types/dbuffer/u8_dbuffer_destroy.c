/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbuffer_destroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 03:52:44 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/08 03:52:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbuffer.h"

t_status	u8_dbuffer_destroy(t_dbuffer **dbuffer_address)
{
	t_dbuffer	*dbuffer;

	dbuffer = (*dbuffer_address);
	free(dbuffer->content);
	free(dbuffer);
	(*dbuffer_address) = 0x0;
	return (STATUS_OK);
}
