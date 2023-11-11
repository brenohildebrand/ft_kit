/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_vec2_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:37:55 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:15:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec2_vector.h"

void	push_vec2_vector(t_vec2_vector v, struct s_vec2 data)
{
	if (v->allocated_size < v->size + 1)
		realloc_vec2_vector(v);
	v->data[v->size] = data;
	v->size += 1;
}
