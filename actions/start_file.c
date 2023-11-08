/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:34:49 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/08 09:42:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/file.h"

t_u8	start_file(t_file file)
{
	t_file	*it_file;
	t_i32	*index;
	
	it_file = get_iteration_file();
	index = get_iteration_file_index();
	(*it_file) = file;
	return (file->buffer->data[*index]);
}
