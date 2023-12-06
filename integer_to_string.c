/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_to_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:20:20 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:36:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

t_string	integer_to_string(t_integer integer)
{
	t_string	string;
	t_integer	another_integer;

	another_integer = integer_copy(integer);
	if (integer_get_value(integer) < 0)
	{
		integer_negate(another_integer);
		string_prepend_character(string, '-');
	}
	while (integer_get_value(another_integer) != 0)
	{
		string_insert(string, 1, another_integer->value % 10 + '0');
		another_integer->value /= 10;
	}
	return (string);
}
