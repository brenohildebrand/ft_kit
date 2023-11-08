/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   done_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:47:47 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/08 10:51:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/file.h"
#include <stdio.h>

t_i32	done_file(void)
{
	t_file	*it_file;
	t_i32	*index;

	it_file = get_iteration_file();
	index = get_iteration_file_index();
	if (*index >= (*it_file)->buffer->size - 1)
	{
		*it_file = 0;
		*index = 0;
		return (1);		
	}
	return (0);
}
