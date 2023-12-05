/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_append_character.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:18:29 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:03:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_append_character(t_string string, t_character character)
{
	if (string->length + 2 > string->size)
		string_realloc(string, string->size + 1);
	string->address[string->length] = character;
	string->address[string->length + 1] = '\0';
	string->length += 1;
}