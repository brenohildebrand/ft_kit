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

// static t_status	dbuffer_malloc(t_dbuffer **dbuffer_address)
// {

// }

t_status	dbuffer_create(t_dbuffer **dbuffer_address)
{
	t_dbuffer	*dbuffer;

	dbuffer_malloc(dbuffer, noway);
	dbuffer_initialize(dbuffer, noway);
}
