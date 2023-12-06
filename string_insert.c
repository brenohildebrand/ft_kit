/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:13:24 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:36:01 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_insert(
	t_string string,
	unsigned int position,
	t_character character,
)
{
	unsigned int	i;

	if (string->length + 2 > string->size)
		string_realloc(string, string->size + 1);
	i = string->length;
	while (i > pos)
	{
		string->address[i + 1] = string->address[i];
		i--;
	}
	string->address[i] = character->value;
}
