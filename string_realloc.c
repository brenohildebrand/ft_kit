/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_realloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:51:15 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/08 10:56:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_realloc(t_string string)
{
	t_string		new_string;
	unsigned int	i;

	new_string = memory_create(sizeof(struct s_string));
	new_string->content = memory_create(2 * string->size);
	i = 0;
	while (i < string->length)
	{
		new_string->content[i] = string->content[i];
		i++;
	}
	new_string->content[i] = '\0';
	string_destroy(string);
	return (new_string);
}