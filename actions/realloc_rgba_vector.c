/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc_rgba_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:44:21 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 18:55:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/rgba_vector.h"

void	realloc_rgba_vector(t_rgba_vector v)
{
	t_rgba	new_data;
	t_u32	i;

	new_data = smalloc(2 * v->allocated_size * sizeof(struct s_rgba));
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
