/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_realloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:59:46 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 13:02:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_realloc(t_string string, unsigned int new_size)
{
	t_string		new_string;
	unsigned int	i;

	new_string = string_create(new_size);
	i = 0;
	if (new_size >= string->size)
	{
		while (i < string->size)
		{
			new_string->address[i] = string->address[i];
			i++;
		}
	}
	else
	{
		while (i < new_size)
		{
			new_string->address[i] = string->address[i];
			i++;
		}
	}
	new_string->address[new_size] = '\0';
	return (new_string);
}