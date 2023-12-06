/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_prepend_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:47:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:49:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_prepend_char(t_string string, char character)
{
	unsigned int	i;

	if (string->length + 2 > string->size)
		string_realloc(string, string->size + 1);
	i = string->length;
	while (i)
	{
		string->address[i + 1] = string->address[i];
		i--;
	}
	string->address[1] = string->address[0];
	string->address[0] = character;
	string->length += 1;
}
