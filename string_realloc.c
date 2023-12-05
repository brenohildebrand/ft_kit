/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_realloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:59:46 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 19:32:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_realloc(t_string string, unsigned int new_size)
{
	char			*new_address;
	unsigned int	copy_until_this_index;

	new_address = memory_create(new_size);
	if (new_size >= string->size)
		copy_until_this_index = string->size;
	else
	{
		copy_until_this_index = new_size;
		string->length = new_size - 1;		
	}
	while (copy_until_this_index--)
		new_address[copy_until_this_index] = \
			string->address[copy_until_this_index];
	string->address[string->length] = 0;
	string->size = new_size;
	string->address = new_address;
}