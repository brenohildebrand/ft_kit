/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sexit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:34:37 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 13:56:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/basic.h"
#include <stdlib.h>

void	sexit(t_u32 status)
{
	destroy_rmanager(get_rmanager());
	exit(status);
}
