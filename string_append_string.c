/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_append_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:04:27 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:07:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_append_string(t_string string, t_string another_string)
{
	unsigned int	i;

	if (string->length + another_string->length + 1 > string->size)
		string_realloc(string, string->length + another_string->length + 1);
	i = 0;
	while (i < another_string->length)
	{
		string->address[string->length + i] = another_string->address[i];
		i++;
	}
	string->address[string->length + i] = '\0';
	string->length += another_string->length;
}