/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_vec3_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:27:38 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 23:25:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec3_vector.h"

void	push_vec3_vector(t_vec3_vector v, struct s_vec3 data)
{
	if (v->allocated_size < v->size + 1)
		realloc_vec3_vector(v);
	v->data[v->size] = data;
	v->size += 1;
}
