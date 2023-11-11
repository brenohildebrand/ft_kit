/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc_u8_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:05:40 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:17:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/u8_vector.h"

void	realloc_u8_vector(t_u8_vector v)
{
	t_u8	*new_data;
	t_u32	i;

	new_data = smalloc(2 * v->allocated_size * sizeof(t_u8));
	i = 0;
	while (i < v->size)
	{
		new_data[i] = v->data[i];
		i++;
	}
	sfree(v->data);
	v->data = new_data;
	v->allocated_size *= 2;
}
