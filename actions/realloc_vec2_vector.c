/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc_vec2_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/31 16:43:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec2_vector.h"

void	realloc_vec2_vector(t_vec2_vector v)
{
	t_vec2	new_data;
	t_u32	i;

	new_data = smalloc(2 * v->allocated_size * sizeof(struct s_vec2));
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