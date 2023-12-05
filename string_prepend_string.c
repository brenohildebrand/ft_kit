/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_prepend_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:07:59 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:11:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_prepend_string(t_string string, t_string another_string)
{
	unsigned int	i;

	if (string->length + another_string->length + 1 > string->size)
		string_realloc(string, string->length + another_string->length + 1);
	i = 0;
	while (i < string->length)
	{
		string->address[another_string->length + i] = string->address[i];
		i++;
	}
	string->address[another_string->length + i] = '\0';
	i = 0;
	while (i < another_string)
	{
		string->address[i] = another_string->address[i];
		i++;
	}
	string->length += another_string->length;
}