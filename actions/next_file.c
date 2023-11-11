/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:43:02 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:14:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/file.h"

t_u8	next_file(void)
{
	t_file	*it_file;
	t_i32	*index;

	it_file = get_iteration_file();
	index = get_iteration_file_index();
	if (*index + 1 <= (*it_file)->buffer->size)
		return ((*it_file)->buffer->data[++(*index)]);
	else
		return ((*it_file)->buffer->data[(*index)]);
}
