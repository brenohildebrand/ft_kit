/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:36:06 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:37:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

t_integer	integer_copy(t_integer integer)
{
	t_integer	another_integer;

	another_integer = integer_create();
	integer_set(another_integer, integer->value);
	return (another_integer);
}
