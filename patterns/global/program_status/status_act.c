/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status_act.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 03:14:29 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/08 03:14:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "status.h"

void	status_act(t_status status)
{
	if (status.action == STATUS_ACTION_EXIT)
	{
		// if (mode == DEBUG_MODE)
		// 	printf(status.message);
		exit(status.code);
	}
	else if (status.action == STATUS_ACTION_WARN)
	{
		// printf(status.message);
	}
}