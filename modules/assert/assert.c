/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:59:51 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 11:00:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assert.h"

void	assert(t_i32 condition, struct s_string message)
{
	if (condition == 1)
	{
		return ;
	}
	else
	{
		string_print(&message);
		exit(1);
	}
}
