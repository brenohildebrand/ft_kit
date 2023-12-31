/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:23:36 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 13:03:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_set(t_string string, char *value)
{
	t_length		new_length;

	new_length = string_get_length();
	while (value[new_length])
		new_length++;
	string_realloc(string, new_length);
	string->address[new_length] = 0;
	while (new_length--)
		string->address[new_length] = value[new_length];
}
