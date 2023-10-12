/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 02:58:29 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/08 02:58:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "status.h"

void	status_set(t_status status)
{
	static t_status program_status = {
		.code = 0,
		.action = 0,
		.message = 0
	};

	program_status = status;
	status_act(status);
}
