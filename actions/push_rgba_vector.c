/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rgba_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:56:11 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 23:25:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/rgba_vector.h"


void	push_rgba_vector(t_rgba_vector v, struct s_rgba data)
{
	if (v->allocated_size < v->size + 1)
		realloc_rgba_vector(v);
	v->data[v->size] = data;
	v->size += 1;
}
