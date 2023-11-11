/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc_vec3_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:24:28 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:17:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec3_vector.h"

void	realloc_vec3_vector(t_vec3_vector v)
{
	t_vec3	new_data;
	t_u32	i;

	new_data = smalloc(2 * v->allocated_size * sizeof(struct s_vec3));
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
