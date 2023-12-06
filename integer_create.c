/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:39:14 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:38:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

t_integer	integer_create(void)
{
	t_integer	integer;

	integer = (t_integer)memory_create(sizeof(int));
	integer->value = 0;
	return (integer);
}
